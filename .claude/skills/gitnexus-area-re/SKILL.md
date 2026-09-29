---
name: gitnexus-area-re
description: "Skill for the RE area of fo4-no-auto-greet. 5 symbols across 1 files."
---

# RE

5 symbols | 1 files | Cohesion: 100%

## When to Use

- Working with code in `extern/`
- Understanding how RVA, get, is_good work
- Modifying re-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | RVA, get, is_good, operator*, operator-> |

## Entry Points

Start here when exploring this area:

- **`RVA`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h:12`
- **`get`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h:25`
- **`is_good`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h:32`
- **`operator*`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h:27`
- **`operator->`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h:28`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `RVA` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | 12 |
| `get` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | 25 |
| `is_good` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | 32 |
| `operator*` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | 27 |
| `operator->` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/RTTI.h` | 28 |

## How to Explore

1. `context({name: "RVA"})` — see callers and callees
2. `query({search_query: "re"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
