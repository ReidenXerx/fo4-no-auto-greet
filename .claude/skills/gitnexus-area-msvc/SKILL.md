---
name: gitnexus-area-msvc
description: "Skill for the Msvc area of fo4-no-auto-greet. 26 symbols across 3 files."
---

# Msvc

26 symbols | 3 files | Cohesion: 97%

## When to Use

- Working with code in `extern/`
- Understanding how operator<=>, operator<=>, operator== work
- Modifying msvc-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | unique_ptr, operator=, operator=, release, reset (+15) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/functional.h` | function, good, operator(), do_call |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/typeinfo.h` | get_root_node, name |

## Entry Points

Start here when exploring this area:

- **`operator<=>`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h:718`
- **`operator<=>`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h:698`
- **`operator==`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h:691`
- **`swap`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h:726`
- **`unique_ptr`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h:8`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `unique_ptr` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 8 |
| `function` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/functional.h` | 7 |
| `operator<=>` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 718 |
| `operator<=>` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 698 |
| `operator==` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 691 |
| `swap` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 726 |
| `operator=` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 360 |
| `operator=` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 331 |
| `release` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 368 |
| `reset` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 375 |
| `get` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 629 |
| `good` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 642 |
| `operator=` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 560 |
| `operator[]` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 635 |
| `get` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 393 |
| `good` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 413 |
| `operator*` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 399 |
| `operator->` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/memory.h` | 406 |
| `good` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/functional.h` | 39 |
| `operator()` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/msvc/functional.h` | 18 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Operator* → Get` | intra_community | 3 |
| `Operator[] → Get` | intra_community | 3 |
| `Operator-> → Get` | intra_community | 3 |

## How to Explore

1. `context({name: "operator<=>"})` — see callers and callees
2. `query({search_query: "msvc"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
