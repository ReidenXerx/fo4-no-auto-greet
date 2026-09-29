---
name: gitnexus-area-internal
description: "Skill for the Internal area of fo4-no-auto-greet. 5 symbols across 5 files."
---

# Internal

5 symbols | 5 files | Cohesion: 100%

## When to Use

- Working with code in `extern/`
- Understanding how CodeTasklet, IFuncCallQuery, RawFuncCallQuery work
- Modifying internal-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/CodeTasklet.h` | CodeTasklet |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/IFuncCallQuery.h` | IFuncCallQuery |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/RawFuncCallQuery.h` | RawFuncCallQuery |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/VirtualMachine.h` | GetSingleton |
| `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/Object.cpp` | Resolve |

## Entry Points

Start here when exploring this area:

- **`CodeTasklet`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/CodeTasklet.h:16`
- **`IFuncCallQuery`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/IFuncCallQuery.h:10`
- **`RawFuncCallQuery`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/RawFuncCallQuery.h:17`
- **`GetSingleton`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/VirtualMachine.h:233`
- **`Resolve`** (Method) — `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/Object.cpp:32`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `CodeTasklet` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/CodeTasklet.h` | 16 |
| `IFuncCallQuery` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/IFuncCallQuery.h` | 10 |
| `RawFuncCallQuery` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/RawFuncCallQuery.h` | 17 |
| `GetSingleton` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/VirtualMachine.h` | 233 |
| `Resolve` | Method | `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/Object.cpp` | 32 |

## How to Explore

1. `context({name: "CodeTasklet"})` — see callers and callees
2. `query({search_query: "internal"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
