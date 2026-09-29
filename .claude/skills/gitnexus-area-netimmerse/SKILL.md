---
name: gitnexus-area-netimmerse
description: "Skill for the NetImmerse area of fo4-no-auto-greet. 63 symbols across 18 files."
---

# NetImmerse

63 symbols | 18 files | Cohesion: 96%

## When to Use

- Working with code in `extern/`
- Understanding how operator<=>, operator<=>, operator== work
- Modifying netimmerse-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | operator<=>, operator<=>, operator==, operator(), get (+8) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTArray.h` | operator*, operator++, operator--, slot_filled, validate (+6) |
| `extern/CommonLibF4RD/CommonLibF4/src/RE/NetImmerse/NiPoint3.cpp` | Cross, UnitCross, Length, SqrLength, Unitize (+4) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiBinaryStream.h` | binary_read, get, read, binary_write, put (+3) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTCollection.h` | NiFree, deallocate, NiMalloc, allocate |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiPoint3.h` | Unitize, NiPoint3, NiPoint3A |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiAVObject.h` | UpdateTransforms, UpdateWorldData |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiObject.h` | GetRTTI, GetStreamableRTTI |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiRefObject.h` | DecRefCount, DeleteThis |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTList.h` | NiTList |

## Entry Points

Start here when exploring this area:

- **`operator<=>`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h:169`
- **`operator<=>`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h:183`
- **`operator==`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h:162`
- **`getline`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiBinaryStream.h:88`
- **`getline`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiBinaryStream.h:81`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `NiPointer` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 7 |
| `NiTList` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTList.h` | 8 |
| `NiTListBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTListBase.h` | 14 |
| `NiTPointerListBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTPointerListBase.h` | 7 |
| `NiTMap` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTMap.h` | 8 |
| `NiTMapBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTMapBase.h` | 22 |
| `NiTPointerMap` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTPointerMap.h` | 8 |
| `NiPoint3` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiPoint3.h` | 4 |
| `NiPoint3A` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiPoint3.h` | 58 |
| `operator<=>` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 169 |
| `operator<=>` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 183 |
| `operator==` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 162 |
| `getline` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiBinaryStream.h` | 88 |
| `getline` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiBinaryStream.h` | 81 |
| `NiFree` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTCollection.h` | 11 |
| `NiMalloc` | Function | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTCollection.h` | 4 |
| `operator()` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 192 |
| `get` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiSmartPointer.h` | 114 |
| `operator*` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTArray.h` | 62 |
| `operator++` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/NetImmerse/NiTArray.h` | 78 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Operator++ → Validate` | intra_community | 3 |
| `Operator-- → Validate` | intra_community | 3 |

## How to Explore

1. `context({name: "operator<=>"})` — see callers and callees
2. `query({search_query: "netimmerse"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
