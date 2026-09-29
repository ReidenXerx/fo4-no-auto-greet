---
name: gitnexus-area-gfx
description: "Skill for the GFx area of fo4-no-auto-greet. 87 symbols across 9 files."
---

# GFx

87 symbols | 9 files | Cohesion: 84%

## When to Use

- Working with code in `extern/`
- Understanding how ASVM, CallFrame, ClassTable work
- Modifying gfx-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | PushBack, GetBoolean, GetInt, GetNumber, GetType (+44) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | ASVM, CallFrame, ClassTable, ConstPool, MetadataTable (+12) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Loader.h` | Loader, StateBag, ActionControl, State, Translator (+5) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_ASString.h` | ASConstString, ASString, ASStringNodeHolder, ASStringBuiltinManagerT |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h` | FileTypeConstants, Resource |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Log.h` | LogBase, LogState |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h` | NewOverrideBase |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScaleformManager.h` | BSScaleformTranslator |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_ASMovieRootBase.h` | ASMovieRootBase |

## Entry Points

Start here when exploring this area:

- **`ASVM`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h:602`
- **`CallFrame`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h:308`
- **`ClassTable`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h:106`
- **`ConstPool`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h:115`
- **`MetadataTable`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h:145`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `ASVM` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 602 |
| `CallFrame` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 308 |
| `ClassTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 106 |
| `ConstPool` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 115 |
| `MetadataTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 145 |
| `MethodBodyTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 127 |
| `MethodTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 136 |
| `ScriptTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 154 |
| `TraitTable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 163 |
| `VM` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_AS3.h` | 406 |
| `ObjectInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | 284 |
| `NewOverrideBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h` | 217 |
| `Loader` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Loader.h` | 151 |
| `StateBag` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Loader.h` | 95 |
| `Movie` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | 700 |
| `MovieDef` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | 59 |
| `MovieImpl` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | 863 |
| `FileTypeConstants` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h` | 20 |
| `Resource` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h` | 8 |
| `Value` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Player.h` | 146 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `GetMember → GetType` | cross_community | 3 |
| `Value → ObjectAddRef` | intra_community | 3 |
| `Operator= → ObjectRelease` | cross_community | 3 |
| `GetString → GetType` | cross_community | 3 |
| `Operator= → ObjectAddRef` | intra_community | 3 |
| `Operator= → ObjectRelease` | intra_community | 3 |
| `HasMember → GetType` | cross_community | 3 |
| `Operator= → ObjectRelease` | intra_community | 3 |
| `Invoke → GetType` | cross_community | 3 |
| `Operator= → ObjectRelease` | cross_community | 3 |

## How to Explore

1. `context({name: "ASVM"})` — see callers and callees
2. `query({search_query: "gfx"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
