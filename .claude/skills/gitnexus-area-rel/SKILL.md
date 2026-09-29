---
name: gitnexus-area-rel
description: "Skill for the REL area of fo4-no-auto-greet. 221 symbols across 10 files."
---

# REL

221 symbols | 10 files | Cohesion: 75%

## When to Use

- Working with code in `extern/`
- Understanding how REL_MAKE_MEMBER_FUNCTION_NON_POD_TYPE, RelocateIfNewer, RelocateIfNewer work
- Modifying rel-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | commonPointerRVA, rootOf, lock, lock, scan (+103) |
| `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | REL_MAKE_MEMBER_FUNCTION_NON_POD_TYPE, RelocateIfNewer, RelocateIfNewer, RelocateVirtualIfNewer, RelocateVirtualIfNewer (+66) |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/Relocation.cpp` | lock, rootOf, logical_function_scopes, module_readable, resolve_callsites (+20) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTimer.h` | GetRuntimeDataOffset, GetRuntimeDataOffset, GetRuntimeSize, GetRuntimeSize |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/GameScript.h` | GetRuntimeDataOffset, GetRuntimeDataOffset, GetRuntimeSize, GetRuntimeSize |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/UI.h` | GetRuntimeDataOffset, GetRuntimeDataOffset, GetRuntimeSize, GetRuntimeSize |
| `src/main.cpp` | CallsTo, Install |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSDefaultObjectManager.h` | GetSingleton |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.h` | load |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/InstructionDecoder.h` | for_each_direct_relative_branch |

## Entry Points

Start here when exploring this area:

- **`REL_MAKE_MEMBER_FUNCTION_NON_POD_TYPE`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:149`
- **`RelocateIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1193`
- **`RelocateIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1183`
- **`RelocateVirtualIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1408`
- **`RelocateVirtualIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1430`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `Offset2ID` | Class | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 572 |
| `REL_MAKE_MEMBER_FUNCTION_NON_POD_TYPE` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 149 |
| `RelocateIfNewer` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1193 |
| `RelocateIfNewer` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1183 |
| `RelocateVirtualIfNewer` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1408 |
| `RelocateVirtualIfNewer` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1430 |
| `RelocateVirtualIfNewer` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1471 |
| `RelocateVirtual` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1356 |
| `RelocateVirtual` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1393 |
| `Relocate` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1171 |
| `Relocate` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 1153 |
| `id_resolve_status_text` | Function | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 128 |
| `lock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/Relocation.cpp` | 1094 |
| `commonPointerRVA` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2546 |
| `rootOf` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2691 |
| `lock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4381 |
| `lock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4398 |
| `scan` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4406 |
| `stateLock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4367 |
| `inResultSegment` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2206 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Id2offset → Has_ng_id` | cross_community | 6 |
| `Id2offset → Has_og_id` | cross_community | 6 |
| `Lock → Read_le` | intra_community | 5 |
| `ValidMsvcBaseDescriptor → Address` | cross_community | 5 |
| `Id2offset → Runtime_family` | cross_community | 5 |
| `Id2offset → Ae_id` | cross_community | 5 |
| `Known_mappings → Runtime_family_key` | cross_community | 5 |
| `ValidMsvcHierarchy → Address` | cross_community | 5 |
| `Pattern_mappings → Runtime_family_key` | cross_community | 5 |
| `ValidMsvcLocator → Address` | cross_community | 5 |

## How to Explore

1. `context({name: "REL_MAKE_MEMBER_FUNCTION_NON_POD_TYPE"})` — see callers and callees
2. `query({search_query: "rel"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
