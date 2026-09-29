---
name: gitnexus-area-havok
description: "Skill for the Havok area of fo4-no-auto-greet. 32 symbols across 16 files."
---

# Havok

32 symbols | 16 files | Cohesion: 100%

## When to Use

- Working with code in `extern/`
- Understanding how hkBaseObject, hkReferencedObject, hknpAllHitsCollector work
- Modifying havok-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | BlockAlloc, BlockAllocBatch, BlockFree, BlockFreeBatch, BufAlloc (+3) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpAllHitsCollector.h` | hknpAllHitsCollector, Reset, hknpAllHitsCollector |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemorySystem.h` | GarbageCollect, GarbageCollectShared, GarbageCollectThread |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkArray.h` | hkArray, hkArrayBase, hkInplaceArray |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryRouter.h` | GetInstance, GetInstancePtr |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBlockStream.h` | hkBlockStream, Stream |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkVector4.h` | Length, Normalize |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBaseObject.h` | hkBaseObject |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkReferencedObject.h` | hkReferencedObject |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCharacterContext.h` | hknpCharacterContext |

## Entry Points

Start here when exploring this area:

- **`hkBaseObject`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBaseObject.h:4`
- **`hkReferencedObject`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkReferencedObject.h:8`
- **`hknpAllHitsCollector`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpAllHitsCollector.h:8`
- **`hknpCharacterContext`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCharacterContext.h:11`
- **`hknpCharacterState`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCharacterState.h:11`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `hkBaseObject` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBaseObject.h` | 4 |
| `hkReferencedObject` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkReferencedObject.h` | 8 |
| `hknpAllHitsCollector` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpAllHitsCollector.h` | 8 |
| `hknpCharacterContext` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCharacterContext.h` | 11 |
| `hknpCharacterState` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCharacterState.h` | 11 |
| `hknpClosestHitCollector` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpClosestHitCollector.h` | 8 |
| `hknpClosestUniqueBodyIdHitCollector` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpClosestUniqueBodyIdHitCollector.h` | 7 |
| `hknpCollisionQueryCollector` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpCollisionQueryCollector.h` | 9 |
| `hknpUniqueBodyIdHitCollector` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hknpUniqueBodyIdHitCollector.h` | 9 |
| `hkArray` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkArray.h` | 21 |
| `hkArrayBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkArray.h` | 7 |
| `hkInplaceArray` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkArray.h` | 28 |
| `hkBlockStream` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBlockStream.h` | 28 |
| `Stream` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkBlockStream.h` | 12 |
| `hkLifoAllocator` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkLifoAllocator.h` | 6 |
| `hkMemoryAllocator` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | 4 |
| `BlockAlloc` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | 16 |
| `BlockAllocBatch` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | 34 |
| `BlockFree` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | 17 |
| `BlockFreeBatch` | Method | `extern/CommonLibF4RD/CommonLibF4/include/RE/Havok/hkMemoryAllocator.h` | 43 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `BufRealloc → BlockAlloc` | intra_community | 3 |
| `BufRealloc → BlockFree` | intra_community | 3 |
| `GarbageCollect → GetInstancePtr` | intra_community | 3 |

## How to Explore

1. `context({name: "hkBaseObject"})` — see callers and callees
2. `query({search_query: "havok"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
