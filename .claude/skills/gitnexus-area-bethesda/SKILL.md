---
name: gitnexus-area-bethesda
description: "Skill for the Bethesda area of fo4-no-auto-greet. 975 symbols across 120 files."
---

# Bethesda

975 symbols | 120 files | Cohesion: 90%

## When to Use

- Working with code in `extern/`
- Understanding how RelocateVirtualIfNewer, RelocateVirtualIfNewer, RelocateVirtual work
- Modifying bethesda-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/TESForms.h` | BGSConstructibleObject, BGSLocation, BGSMessage, BGSPerk, EffectSetting (+102) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/FormComponents.h` | BGSAttachParentArray, BGSAttackDataForm, BGSBipedObjectForm, BGSBlockBashData, BGSCraftingUseSound (+82) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/IMenu.h` | BarterMenuTentativeInventoryUIInterface, InventoryUserUIInterface, FlatScreenModel, GameUIModel, BarterMenu (+69) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTArray.h` | BSTDataBuffer, BSTArray, BSTArray, BSTArray, begin (+38) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTHashMap.h` | BSTScatterTable, BSTScatterTable, clear, empty, insert (+34) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSExtraData.h` | BGSObjectInstanceExtra, BSExtraData, ExtraAliasInstanceArray, ExtraBendableSplineParams, ExtraCellWaterType (+30) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/TESBoundObjects.h` | BGSAcousticSpace, BGSAddonNode, BGSArtObject, BGSBendableSpline, BGSComponent (+26) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/Events.h` | EquipEventSource, HitEventSource, MGEFApplyEventSource, ObjectLoadedEventSource, CanDisplayNextHUDMessage (+23) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/BSTList.h` | BSSimpleList, BSSimpleList, assign, cbefore_begin, cend (+23) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Bethesda/MemoryManager.h` | aligned_free, aligned_realloc, realloc, GetSingleton, calloc (+23) |

## Entry Points

Start here when exploring this area:

- **`RelocateVirtualIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1430`
- **`RelocateVirtualIfNewer`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1471`
- **`RelocateVirtual`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1356`
- **`RelocateVirtual`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/REL/Relocation.h:1393`
- **`lock`** (Function) — `extern/CommonLibF4RD/CommonLibF4/src/REL/Relocation.cpp:1094`

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

1. `context({name: "RelocateVirtualIfNewer"})` — see callers and callees
2. `query({search_query: "bethesda"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
