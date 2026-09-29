---
name: gitnexus-area-impl
description: "Skill for the Impl area of fo4-no-auto-greet. 11 symbols across 1 files."
---

# Impl

11 symbols | 1 files | Cohesion: 100%

## When to Use

- Working with code in `extern/`
- Understanding how operator~, enumeration, enumeration work
- Modifying impl-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | enumeration, operator~, enumeration, get, operator* (+6) |

## Entry Points

Start here when exploring this area:

- **`operator~`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h:461`
- **`enumeration`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h:268`
- **`enumeration`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h:279`
- **`get`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h:314`
- **`operator*`** (Method) — `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h:313`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `enumeration` | Class | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 268 |
| `operator~` | Function | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 461 |
| `enumeration` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 279 |
| `get` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 314 |
| `operator*` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 313 |
| `active` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 200 |
| `release` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 197 |
| `scope_exit` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 168 |
| `back` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 131 |
| `length` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 134 |
| `size` | Method | `extern/CommonLibF4RD/CommonLibF4/include/F4SE/Impl/PCH.h` | 135 |

## How to Explore

1. `context({name: "operator~"})` — see callers and callees
2. `query({search_query: "impl"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
