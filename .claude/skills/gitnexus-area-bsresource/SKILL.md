---
name: gitnexus-area-bsresource
description: "Skill for the BSResource area of fo4-no-auto-greet. 23 symbols across 4 files."
---

# BSResource

23 symbols | 4 files | Cohesion: 100%

## When to Use

- Working with code in `extern/`
- Understanding how GlobalLocations, GlobalPaths, Location work
- Modifying bsresource-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | CreateAsync, DoCreateAsync, CreateOp, DoCreateOp, DoGetName (+15) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalLocations.h` | GlobalLocations |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalPaths.h` | GlobalPaths |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/Location.h` | Location |

## Entry Points

Start here when exploring this area:

- **`GlobalLocations`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalLocations.h:8`
- **`GlobalPaths`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalPaths.h:9`
- **`Location`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/Location.h:11`
- **`CreateAsync`** (Method) — `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp:145`
- **`DoCreateAsync`** (Method) — `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp:54`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `GlobalLocations` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalLocations.h` | 8 |
| `GlobalPaths` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/GlobalPaths.h` | 9 |
| `Location` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSResource/Location.h` | 11 |
| `CreateAsync` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 145 |
| `DoCreateAsync` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 54 |
| `CreateOp` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 140 |
| `DoCreateOp` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 75 |
| `DoGetName` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 48 |
| `GetName` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 105 |
| `DoPrefetchAll` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 32 |
| `PrefetchAll` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 150 |
| `DoPrefetchAt` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 27 |
| `PrefetchAt` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 158 |
| `DoQTaggedPrioritizedReadSupported` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 70 |
| `QTaggedPrioritizedReadSupported` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 171 |
| `DoReadAt` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 80 |
| `ReadAt` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 97 |
| `DoSetEndOfStream` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 22 |
| `SetEndOfStream` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 194 |
| `DoStartTaggedPrioritizedRead` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSResource/Stream.cpp` | 37 |

## How to Explore

1. `context({name: "GlobalLocations"})` — see callers and callees
2. `query({search_query: "bsresource"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
