---
name: gitnexus-area-bethesda
description: "Skill for the Bethesda area of fo4-no-auto-greet. 954 symbols across 117 files."
---

# Bethesda

954 symbols | 117 files | Cohesion: 91%

## When to Use

- Working with code in `extern/`
- Understanding how make_structure_tag, calloc, calloc work
- Modifying bethesda-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/TESForms.h` | BGSConstructibleObject, BGSLocation, BGSMessage, BGSPerk, EffectSetting (+102) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | BGSAttachParentArray, BGSAttackDataForm, BGSBipedObjectForm, BGSBlockBashData, BGSCraftingUseSound (+82) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/IMenu.h` | BarterMenuTentativeInventoryUIInterface, InventoryUserUIInterface, FlatScreenModel, GameUIModel, BarterMenu (+69) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTArray.h` | BSTDataBuffer, BSTArray, BSTArray, BSTArray, begin (+38) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTHashMap.h` | deallocate_bytes, BSTScatterTable, BSTScatterTable, clear, empty (+34) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSExtraData.h` | BGSObjectInstanceExtra, BSExtraData, ExtraAliasInstanceArray, ExtraBendableSplineParams, ExtraCellWaterType (+30) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/TESBoundObjects.h` | BGSAcousticSpace, BGSAddonNode, BGSArtObject, BGSBendableSpline, BGSComponent (+26) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/Events.h` | EquipEventSource, HitEventSource, MGEFApplyEventSource, ObjectLoadedEventSource, CanDisplayNextHUDMessage (+23) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTList.h` | BSSimpleList, BSSimpleList, assign, cbefore_begin, cend (+23) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/MemoryManager.h` | calloc, calloc, free, aligned_free, aligned_realloc (+23) |

## Entry Points

Start here when exploring this area:

- **`make_structure_tag`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScriptUtil.h:33`
- **`calloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/MemoryManager.h:289`
- **`calloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/MemoryManager.h:299`
- **`free`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/MemoryManager.h:316`
- **`PackVariable`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSScriptUtil.h:530`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `ActorValueInfo` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/ActorValueInfo.h` | 203 |
| `BGSHeadPart` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSHeadPart.h` | 10 |
| `Mod` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSMod.h` | 17 |
| `Container` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSMod.h` | 103 |
| `Item` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSMod.h` | 247 |
| `Items` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSMod.h` | 269 |
| `BGSTextureSet` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BGSTextureSet.h` | 157 |
| `BSTDataBuffer` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTArray.h` | 644 |
| `BGSAttachParentArray` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 19 |
| `BGSAttackDataForm` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 20 |
| `BGSBipedObjectForm` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 21 |
| `BGSBlockBashData` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 22 |
| `BGSCraftingUseSound` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 23 |
| `BGSDestructibleObjectForm` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 24 |
| `BGSEquipType` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 25 |
| `BGSFeaturedItemMessage` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 26 |
| `BGSForcedLocRefType` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 27 |
| `BGSIdleCollection` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 28 |
| `BGSInstanceNamingRulesForm` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 29 |
| `BGSKeywordForm` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | 30 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `AddExtra → Allocate` | cross_community | 7 |
| `AddExtra → GetSingleton` | cross_community | 7 |
| `RemoveExtra → Allocate` | cross_community | 7 |
| `RemoveExtra → GetSingleton` | cross_community | 7 |
| `Classify → ToUpperASCII` | intra_community | 5 |
| `DispatchHelper → GetSingleton` | cross_community | 4 |
| `Pop_back → Begin` | intra_community | 4 |
| `Resize_impl → Capacity` | cross_community | 4 |
| `Operator= → Size` | intra_community | 4 |
| `Operator= → Allocate` | cross_community | 4 |

## How to Explore

1. `context({name: "make_structure_tag"})` — see callers and callees
2. `query({search_query: "bethesda"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
