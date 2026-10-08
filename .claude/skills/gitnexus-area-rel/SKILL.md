---
name: gitnexus-area-rel
description: "Skill for the REL area of fo4-no-auto-greet. 200 symbols across 5 files."
---

# REL

200 symbols | 5 files | Cohesion: 74%

## When to Use

- Working with code in `extern/`
- Understanding how commonPointerRVA, rootOf, lock work
- Modifying rel-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | commonPointerRVA, rootOf, lock, lock, scan (+103) |
| `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | base, image_size, pointer, preferred_base, segment (+61) |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/Relocation.cpp` | rootOf, logical_function_scopes, module_readable, resolve_callsites, id2offset (+19) |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.h` | load |
| `extern/CommonLibF4RD/CommonLibF4/src/REL/InstructionDecoder.h` | for_each_direct_relative_branch |

## Entry Points

Start here when exploring this area:

- **`commonPointerRVA`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp:2546`
- **`rootOf`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp:2691`
- **`lock`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp:4381`
- **`lock`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp:4398`
- **`scan`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp:4406`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `Offset2ID` | Class | `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h` | 572 |
| `commonPointerRVA` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2546 |
| `rootOf` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2691 |
| `lock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4381 |
| `lock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4398 |
| `scan` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4406 |
| `stateLock` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 4367 |
| `inResultSegment` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2206 |
| `inSegment` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2201 |
| `pointerRVA` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2219 |
| `readPointer` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2230 |
| `readU32` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2239 |
| `readable` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2209 |
| `validAscii` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2248 |
| `validHierarchy` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2285 |
| `validLocator` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2310 |
| `validTypeDescriptor` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2264 |
| `groupAnchors` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 1963 |
| `processSection` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 1904 |
| `commonReadable` | Function | `extern/CommonLibF4RD/CommonLibF4/src/REL/RuntimeDatabase.cpp` | 2536 |

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

1. `context({name: "commonPointerRVA"})` — see callers and callees
2. `query({search_query: "rel"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
