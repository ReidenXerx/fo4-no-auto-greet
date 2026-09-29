---
name: gitnexus-area-bsscript
description: "Skill for the BSScript area of fo4-no-auto-greet. 58 symbols across 21 files."
---

# BSScript

58 symbols | 21 files | Cohesion: 99%

## When to Use

- Working with code in `extern/`
- Understanding how IVMDebugInterface, IVMSaveLoadInterface, IVirtualMachine work
- Modifying bsscript-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Variable.h` | Variable, copy, operator=, operator=, operator= (+8) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/TypeInfo.h` | GetRawType, IsObject, IsObjectArray, IsStruct, IsStructArray (+4) |
| `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/Array.cpp` | back, data, empty, end, operator[] (+1) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVirtualMachine.h` | IVirtualMachine, ErrorImpl, PostCachedErrorToLogger, PostError |
| `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/TypeInfo.cpp` | GetRawType, GetComplexType, GetObjectTypeInfo, GetStructTypeInfo |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IComplexType.h` | IComplexType, GetRawType, IsObject |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/GameScript.h` | Profiler, SavePatcher, ObjectBindPolicy |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/ArrayWrapper.h` | ArrayWrapper, ReplaceArray |
| `extern/CommonLibF4RD/CommonLibF4/src/RE/Bethesda/BSScript/ObjectTypeInfo.cpp` | Dtor, ~ObjectTypeInfo |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVMDebugInterface.h` | IVMDebugInterface |

## Entry Points

Start here when exploring this area:

- **`IVMDebugInterface`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVMDebugInterface.h:6`
- **`IVMSaveLoadInterface`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVMSaveLoadInterface.h:27`
- **`IVirtualMachine`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVirtualMachine.h:62`
- **`VirtualMachine`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/VirtualMachine.h:69`
- **`IComplexType`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IComplexType.h:20`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `IVMDebugInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVMDebugInterface.h` | 6 |
| `IVMSaveLoadInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVMSaveLoadInterface.h` | 27 |
| `IVirtualMachine` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVirtualMachine.h` | 62 |
| `VirtualMachine` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Internal/VirtualMachine.h` | 69 |
| `IComplexType` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IComplexType.h` | 20 |
| `ObjectTypeInfo` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/ObjectTypeInfo.h` | 25 |
| `StructTypeInfo` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/StructTypeInfo.h` | 26 |
| `ICachedErrorMessage` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/ICachedErrorMessage.h` | 17 |
| `ErrorImpl` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IVirtualMachine.h` | 144 |
| `IObjectProcessor` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IObjectProcessor.h` | 10 |
| `LinkerProcessor` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/LinkerProcessor.h` | 18 |
| `IProfilePolicy` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/IProfilePolicy.h` | 25 |
| `Profiler` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/GameScript.h` | 423 |
| `ISavePatcherInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/ISavePatcherInterface.h` | 22 |
| `SavePatcher` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/GameScript.h` | 447 |
| `ObjectBindPolicy` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/ObjectBindPolicy.h` | 33 |
| `ObjectBindPolicy` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/GameScript.h` | 279 |
| `Variable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Variable.h` | 22 |
| `Variable` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Variable.h` | 38 |
| `copy` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScript/Variable.h` | 205 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `IsComplexTypeArray → IsComplex` | intra_community | 3 |
| `SetArray → IsComplex` | intra_community | 3 |

## How to Explore

1. `context({name: "IVMDebugInterface"})` — see callers and callees
2. `query({search_query: "bsscript"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
