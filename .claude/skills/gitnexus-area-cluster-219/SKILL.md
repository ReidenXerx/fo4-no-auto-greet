---
name: gitnexus-area-cluster-219
description: "Skill for the Cluster_219 area of fo4-no-auto-greet. 3 symbols across 1 files."
---

# Cluster_219

3 symbols | 1 files | Cohesion: 100%

## When to Use

- Working with code in `src/`
- Understanding how Decide, Silenced, Thunk work
- Modifying cluster_219-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `src/main.cpp` | Decide, Silenced, Thunk |

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `Decide` | Function | `src/main.cpp` | 45 |
| `Silenced` | Function | `src/main.cpp` | 60 |
| `Thunk` | Function | `src/main.cpp` | 79 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Thunk → Decide` | intra_community | 3 |

## How to Explore

1. `context({name: "Decide"})` — see callers and callees
2. `query({search_query: "cluster_219"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
