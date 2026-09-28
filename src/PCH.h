#pragma once

#include "RE/Fallout.h"
#include "F4SE/F4SE.h"

#include <spdlog/sinks/base_sink.h>

#include <filesystem>
#include <fstream>

#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstring>
#include <mutex>
#include <string_view>
#include <unordered_map>
#include <vector>

#define DLLEXPORT __declspec(dllexport)

namespace logger = F4SE::log;
using namespace std::literals;
