# No Auto-Greet

Fallout 4. Traders stop opening a conversation, or calling out to you, when you walk past.

In the vanilla game a trader starts talking to you, camera and all, the moment you come within about
2.5 m where they can see you, and calls out a hello as you pass their stall. With this plugin traders
wait until you press Talk. Everyone else behaves exactly as in the vanilla game: companions, quest
NPCs, settlers, guards.

## Who counts as a trader

Anyone in a faction with a merchant container: the faction the game opens barter from. That is
Diamond City's and Goodneighbor's shopkeepers, the doctors, traveling merchants, Far Harbor's and
Nuka-World's traders, and every settler you assign to a shop, plus traders from other mods. In the
vanilla game and its DLC that is 108 factions. Anyone who is or has been your companion is left alone.

## How

The game decides in one function, for each nearby NPC, whether they greet you by themselves: the
talk they open and the hello they say. For a trader, this plugin skips that function. Scripted
scenes where a quest has someone stop you use a separate path and are untouched, and pressing Talk
works as always.

- F4SE plugin, one DLL: Fallout 4 1.10.163 (F4SE 0.6.23) and the Anniversary Edition 1.11.x (F4SE
  0.7.9), through [Runtime Database](https://www.nexusmods.com/fallout4/mods/108394), required on both.
- No plugin file, no scripts, no load-order slot. Safe to add or remove mid-game.
- `Documents\My Games\Fallout4\F4SE\NoAutoGreet.log` says whether it hooked and how many trader
  factions it found.

## Build

Visual Studio 2022 and vcpkg:

```
cmake -S . -B build-rd -G "Visual Studio 17 2022" -A x64 -DCMAKE_TOOLCHAIN_FILE=<vcpkg>/scripts/buildsystems/vcpkg.cmake
cmake --build build-rd --config Release
pwsh scripts/make-release.ps1
```

## Licence

MIT, see `LICENSE`. CommonLibF4RD (extern/) carries its own licence.
