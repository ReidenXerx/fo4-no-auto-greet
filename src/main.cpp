// No Auto-Greet: traders stop opening conversations and calling out on their own.
//
// THE ENGINE. One function decides, per nearby actor and AI update, whether that actor
// greets the player by itself: it reads fAIMinGreetingDistance (the actor opens a talk)
// and fAIIdleChatterDistance (the actor says a hello), and does nothing else. It is the
// only real reader of fAIMinGreetingDistance in the executable (measured 2026-09-28 on
// 1.10.163 and 1.11.240). Forced greets from quest packages are a separate branch of the
// AI update (fAIForceGreetingTimer) and never reach it.
//   1.10.163: 0x140E4AC30, Address Library id 415818, two direct callers.
//   1.11.240: 0x140D11170, id 2232088 (same prologue, same setting reads), two callers.
//
// THE RULE. A trader -- someone in a faction with a merchant container, the faction the
// game opens barter from, settlement shopkeepers included -- skips that function, unless
// they are or have been the player's companion. Everyone else is untouched.

#include "PCH.h"

namespace
{
	constexpr std::uint64_t kGreetOG = 415818;
	constexpr std::uint64_t kGreetAE = 2232088;

	// Fallout4.esm: CurrentCompanionFaction, HasBeenCompanionFaction.
	constexpr std::uint32_t kCurrentCompanion = 0x00023C01;
	constexpr std::uint32_t kHasBeenCompanion = 0x000A1B85;

	using GreetFn = void(void*, RE::Actor*);
	REL::Relocation<GreetFn> g_greet;

	std::vector<RE::TESFaction*> g_merchants;
	RE::TESFaction*              g_companion[2]{};
	std::atomic_bool             g_ready{ false };
	std::atomic_bool             g_typeLogged{ false };

	// One verdict per actor for a few seconds: the check is ~100 faction lookups and the
	// function runs every AI update for every actor near the player.
	struct Verdict
	{
		bool                                  silence;
		std::chrono::steady_clock::time_point until;
	};
	std::mutex                                     g_cacheLock;
	std::unordered_map<std::uint32_t, Verdict>     g_cache;
	constexpr auto                                 kCacheFor = std::chrono::seconds(10);

	[[nodiscard]] bool Decide(RE::Actor* a_actor)
	{
		for (auto* faction : g_companion) {
			if (faction && a_actor->IsInFaction(faction)) {
				return false;
			}
		}
		for (auto* faction : g_merchants) {
			if (a_actor->IsInFaction(faction)) {
				return true;
			}
		}
		return false;
	}

	[[nodiscard]] bool Silenced(RE::Actor* a_actor)
	{
		const auto now = std::chrono::steady_clock::now();
		const auto id = a_actor->GetFormID();
		{
			std::scoped_lock lock{ g_cacheLock };
			if (const auto it = g_cache.find(id); it != g_cache.end() && it->second.until > now) {
				return it->second.silence;
			}
		}
		const bool silence = Decide(a_actor);
		std::scoped_lock lock{ g_cacheLock };
		if (g_cache.size() > 4096) {
			g_cache.clear();
		}
		g_cache[id] = { silence, now + kCacheFor };
		return silence;
	}

	void Thunk(void* a_ctx, RE::Actor* a_actor)
	{
		if (a_actor && g_ready.load(std::memory_order_acquire)) {
			const bool isActor = a_actor->GetFormType() == RE::ENUM_FORM_ID::kACHR;
			if (!g_typeLogged.exchange(true)) {
				logger::info("first call: the second argument is {}", isActor ? "an actor, as measured" : "NOT an actor - passing everything through");
			}
			if (isActor && Silenced(a_actor)) {
				return;
			}
		}
		g_greet(a_ctx, a_actor);
	}

	// Every direct call to the greeting function in .text: two on every runtime measured.
	[[nodiscard]] std::vector<std::uintptr_t> CallsTo(std::uintptr_t a_target)
	{
		std::vector<std::uintptr_t> sites;
		const auto                  text = REL::Module::get().segment(REL::Segment::text);
		const auto*                 begin = reinterpret_cast<const std::uint8_t*>(text.address());
		const std::size_t           size = text.size();
		for (std::size_t i = 0; i + 5 <= size; ++i) {
			if (begin[i] != 0xE8) {
				continue;
			}
			std::int32_t rel = 0;
			std::memcpy(&rel, begin + i + 1, sizeof(rel));
			const auto site = reinterpret_cast<std::uintptr_t>(begin + i);
			if (site + 5 + static_cast<std::intptr_t>(rel) == a_target) {
				sites.push_back(site);
			}
		}
		return sites;
	}

	void Install()
	{
		const auto target = REL::IDDatabase::get().resolve(REL::ID{ kGreetOG, kGreetAE });
		if (!target) {
			logger::warn("the greeting function has no address on this game version ({}) - not installed, vanilla behaviour",
				REL::id_resolve_status_text(target.status));
			return;
		}
		const auto address = REL::Module::get().base() + *target.rva;
		const auto sites = CallsTo(address);
		if (sites.size() != 2) {
			logger::warn("found {} calls to the greeting function where two were expected - not installed, vanilla behaviour",
				sites.size());
			return;
		}
		g_greet = address;
		auto& trampoline = F4SE::GetTrampoline();
		for (const auto site : sites) {
			trampoline.write_call<5>(site, Thunk);
		}
		logger::info("hooked both calls to the greeting function (+{:X})", *target.rva);
	}

	void CollectFactions()
	{
		auto* data = RE::TESDataHandler::GetSingleton();
		if (!data) {
			logger::warn("no data handler - nothing silenced");
			return;
		}
		for (auto* faction : data->GetFormArray<RE::TESFaction>()) {
			if (faction && faction->vendorData.merchantContainer) {
				g_merchants.push_back(faction);
			}
		}
		g_companion[0] = RE::TESForm::GetFormByID<RE::TESFaction>(kCurrentCompanion);
		g_companion[1] = RE::TESForm::GetFormByID<RE::TESFaction>(kHasBeenCompanion);
		logger::info("{} trader factions (a merchant container set); companions excluded{}", g_merchants.size(),
			g_companion[0] && g_companion[1] ? "" : " - WARNING: a companion faction is missing");
		g_ready.store(true, std::memory_order_release);
	}

	void OnMessage(F4SE::MessagingInterface::Message* a_msg)
	{
		if (a_msg && a_msg->type == F4SE::MessagingInterface::kGameDataReady) {
			CollectFactions();
		}
	}

	class FileSink final : public spdlog::sinks::base_sink<std::mutex>
	{
	public:
		explicit FileSink(const std::filesystem::path& a_path) :
			_out(a_path, std::ios::binary | std::ios::trunc)
		{}

	protected:
		void sink_it_(const spdlog::details::log_msg& a_msg) override
		{
			spdlog::memory_buf_t formatted;
			formatter_->format(a_msg, formatted);
			_out.write(formatted.data(), static_cast<std::streamsize>(formatted.size()));
		}

		void flush_() override { _out.flush(); }

	private:
		std::ofstream _out;
	};

	void InitLogging()
	{
		auto path = logger::log_directory();
		if (!path) {
			return;
		}
		*path /= NAG_PROJECT_NAME ".log"sv;
		// Opened by its wide path, never path::string(): a user name outside the ANSI code page
		// throws, and a throw in F4SEPlugin_Load disables the plugin with no log (Rapport, 2026-09-24).
		auto sink = std::make_shared<FileSink>(*path);
		auto log = std::make_shared<spdlog::logger>("global log"s, std::move(sink));
		log->set_level(spdlog::level::info);
		log->flush_on(spdlog::level::info);
		spdlog::set_default_logger(std::move(log));
		spdlog::set_pattern("[%H:%M:%S] %v"s);
	}

	constexpr F4SE::PluginVersionData MakeVersionData() noexcept
	{
		F4SE::PluginVersionData data{};
		data.pluginVersion = (NAG_VERSION_MAJOR << 24) | (NAG_VERSION_MINOR << 16) | (NAG_VERSION_PATCH << 4);
		constexpr std::string_view name = NAG_PROJECT_NAME;
		for (std::size_t i = 0; i < name.size() && i < std::size(data.name) - 1; ++i) {
			data.name[i] = name[i];
		}
		data.addressIndependence = F4SE::PluginVersionData::kAddressIndependence_Signatures;
		data.structureIndependence = F4SE::PluginVersionData::kStructureIndependence_1_10_980Layout |
		                             F4SE::PluginVersionData::kStructureIndependence_1_11_137Layout;
		return data;
	}
}

// OG's F4SE (0.6.23) loads a plugin by Query; NG's and AE's read F4SEPlugin_Version.
extern "C" DLLEXPORT bool F4SEAPI F4SEPlugin_Query(const F4SE::QueryInterface* a_f4se, F4SE::PluginInfo* a_info)
{
	a_info->infoVersion = F4SE::PluginInfo::kVersion;
	a_info->name = NAG_PROJECT_NAME;
	a_info->version = NAG_VERSION_MAJOR * 10000 + NAG_VERSION_MINOR * 100 + NAG_VERSION_PATCH;
	return !a_f4se->IsEditor();
}

extern "C" DLLEXPORT constinit F4SE::PluginVersionData F4SEPlugin_Version = MakeVersionData();

extern "C" DLLEXPORT bool F4SEAPI F4SEPlugin_Load(const F4SE::LoadInterface* a_f4se)
{
	F4SE::Init(a_f4se);
	try {
		InitLogging();
	} catch (...) {
	}
	logger::info("{} {} on runtime {}", NAG_PROJECT_NAME, NAG_VERSION_STRING, a_f4se->RuntimeVersion().string());

	F4SE::AllocTrampoline(1 << 6);
	Install();

	// The default listener only (F4SE's own messages). A NAMED sender killed AE's F4SE 0.7.9
	// silently (Rapport, 2026-09-26).
	const auto* messaging = F4SE::GetMessagingInterface();
	if (!messaging || !messaging->RegisterListener(OnMessage)) {
		logger::warn("could not listen for game data - nothing silenced");
	}
	return true;
}
