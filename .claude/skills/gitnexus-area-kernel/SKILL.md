---
name: gitnexus-area-kernel
description: "Skill for the Kernel area of fo4-no-auto-greet. 62 symbols across 8 files."
---

# Kernel

62 symbols | 8 files | Cohesion: 93%

## When to Use

- Working with code in `extern/`
- Understanding how free, realloc, calloc work
- Modifying kernel-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h` | free, realloc, Alloc, Alloc, Alloc (+20) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_MemoryHeap.h` | Alloc, AllocAutoHeap, AllocAutoHeap, ArenaIsEmpty, CreateArena (+5) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | Ptr, Ptr, Ptr, TryAttach, TryDetach (+5) |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Allocator.h` | AllocatorBaseLH, AllocatorPagedCC, ConstructorMov, ConstructorPagedMovCC |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Threads.h` | AcquireInterface, Event, Mutex, Waitable |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Array.h` | Array, ArrayBase, ArrayPagedBase, ArrayPagedCC |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_SysAlloc.h` | SysAlloc, SysAllocBase, SysAllocPaged |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Atomic.h` | AtomicInt, AtomicValueBase |

## Entry Points

Start here when exploring this area:

- **`free`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h:153`
- **`realloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h:148`
- **`calloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h:137`
- **`calloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h:143`
- **`malloc`** (Function) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Memory.h:115`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `AllocatorBaseLH` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Allocator.h` | 14 |
| `AllocatorPagedCC` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Allocator.h` | 36 |
| `ConstructorMov` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Allocator.h` | 21 |
| `ConstructorPagedMovCC` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Allocator.h` | 28 |
| `Ptr` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | 70 |
| `AcquireInterface` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Threads.h` | 10 |
| `Event` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Threads.h` | 11 |
| `Mutex` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Threads.h` | 12 |
| `Waitable` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Threads.h` | 14 |
| `SysAlloc` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_SysAlloc.h` | 10 |
| `SysAllocBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_SysAlloc.h` | 11 |
| `SysAllocPaged` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_SysAlloc.h` | 12 |
| `Array` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Array.h` | 55 |
| `ArrayBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Array.h` | 47 |
| `ArrayPagedBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Array.h` | 62 |
| `ArrayPagedCC` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Array.h` | 75 |
| `AtomicInt` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Atomic.h` | 16 |
| `AtomicValueBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_Atomic.h` | 7 |
| `RefCountImpl` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | 6 |
| `RefCountImplCore` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | 7 |

## Execution Flows

| Flow | Type | Steps |
|------|------|-------|
| `Calloc → GetGlobalHeap` | cross_community | 5 |
| `Calloc → Alloc` | intra_community | 5 |
| `Malloc → GetGlobalHeap` | cross_community | 4 |
| `Malloc → Alloc` | intra_community | 4 |
| `Free → Free` | intra_community | 3 |
| `Realloc → Realloc` | intra_community | 3 |
| `Free → GetGlobalHeap` | intra_community | 3 |
| `Realloc → GetGlobalHeap` | intra_community | 3 |

## How to Explore

1. `context({name: "free"})` — see callers and callees
2. `query({search_query: "kernel"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
