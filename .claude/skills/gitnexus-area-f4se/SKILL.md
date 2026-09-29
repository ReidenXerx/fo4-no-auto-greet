---
name: gitnexus-area-f4se
description: "Skill for the F4SE area of fo4-no-auto-greet. 82 symbols across 7 files."
---

# F4SE

82 symbols | 7 files | Cohesion: 96%

## When to Use

- Working with code in `extern/`
- Understanding how AllocTrampoline, GetF4SEVersion, GetMessagingInterface work
- Modifying f4se-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Interfaces.h` | AllocateFromBranchPool, EditorVersion, F4SEVersion, GetPluginHandle, GetProxy (+36) |
| `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Trampoline.h` | allocate, create, create, do_create, log_stats (+12) |
| `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | AllocTrampoline, GetF4SEVersion, GetMessagingInterface, GetObjectInterface, GetPapyrusInterface (+10) |
| `extern/CommonLibF4RD/CommonLibF4/include/F4SE/API.h` | AllocTrampoline, GetMessagingInterface, Init |
| `extern/CommonLibF4RD/ExampleProject/src/Plugin.cpp` | InitializeLogger, Initialize |
| `src/main.cpp` | F4SEPlugin_Load, InitLogging |
| `extern/CommonLibF4RD/CommonLibF4/src/F4SE/Trampoline.cpp` | allocate, log_stats |

## Entry Points

Start here when exploring this area:

- **`AllocTrampoline`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp:158`
- **`GetF4SEVersion`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp:86`
- **`GetMessagingInterface`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp:117`
- **`GetObjectInterface`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp:142`
- **`GetPapyrusInterface`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp:127`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `ITaskDelegate` | Class | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Interfaces.h` | 302 |
| `TaskDelegate` | Class | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Interfaces.h` | 317 |
| `LoadInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Interfaces.h` | 131 |
| `QueryInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Interfaces.h` | 103 |
| `AllocTrampoline` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 158 |
| `GetF4SEVersion` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 86 |
| `GetMessagingInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 117 |
| `GetObjectInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 142 |
| `GetPapyrusInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 127 |
| `GetPluginHandle` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 91 |
| `GetPluginInfo` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 101 |
| `GetReleaseIndex` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 96 |
| `GetScaleformInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 122 |
| `GetSerializationInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 132 |
| `GetTaskInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 137 |
| `GetTrampolineInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 147 |
| `Init` | Function | `extern/CommonLibF4RD/CommonLibF4/src/F4SE/API.cpp` | 54 |
| `AllocTrampoline` | Function | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/API.h` | 36 |
| `GetMessagingInterface` | Function | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/API.h` | 27 |
| `Init` | Function | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/API.h` | 20 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Write_5branch → Release` | cross_community | 4 |
| `Write_5branch → Free_size` | intra_community | 4 |
| `Write_6branch → Release` | cross_community | 4 |
| `Write_6branch → Free_size` | intra_community | 4 |
| `AllocTrampoline → Get` | intra_community | 3 |
| `Create → Log_stats` | intra_community | 3 |
| `Write_5branch → Log_stats` | cross_community | 3 |
| `Create → Release` | intra_community | 3 |
| `Write_6branch → Log_stats` | cross_community | 3 |

## How to Explore

1. `context({name: "AllocTrampoline"})` — see callers and callees
2. `query({search_query: "f4se"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
