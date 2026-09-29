---
name: gitnexus-area-render
description: "Skill for the Render area of fo4-no-auto-greet. 20 symbols across 9 files."
---

# Render

20 symbols | 9 files | Cohesion: 91%

## When to Use

- Working with code in `extern/`
- Understanding how ResourceLibBase, RefCountBase, RefCountBaseStatImpl work
- Modifying render-related functionality

## Key Files

| File | Symbols |
|------|---------|
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | ContextLock, ServiceCommand, Entry, DisplayHandle, RTHandle |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_TreeNode.h` | TreeContainer, TreeNode, TreeRoot |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | RefCountBase, RefCountBaseStatImpl |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix2x4.h` | Matrix2x4, Matrix2x4Data |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix3x4.h` | Matrix3x4, Matrix3x4Data |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix4x4.h` | Matrix4x4, Matrix4x4Data |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Types2D.h` | Rect, RectData |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h` | ResourceLibBase |
| `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_ThreadCommandQueue.h` | ThreadCommand |

## Entry Points

Start here when exploring this area:

- **`ResourceLibBase`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h:92`
- **`RefCountBase`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h:61`
- **`RefCountBaseStatImpl`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h:50`
- **`ContextLock`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h:17`
- **`ServiceCommand`** (Class) — `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h:168`

## Key Symbols

| Symbol | Type | File | Line |
|--------|------|------|------|
| `ResourceLibBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/GFx/GFx_Resource.h` | 92 |
| `RefCountBase` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | 61 |
| `RefCountBaseStatImpl` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Kernel/SF_RefCount.h` | 50 |
| `ContextLock` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | 17 |
| `ServiceCommand` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | 168 |
| `ThreadCommand` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_ThreadCommandQueue.h` | 11 |
| `Entry` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | 18 |
| `TreeContainer` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_TreeNode.h` | 7 |
| `TreeNode` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_TreeNode.h` | 8 |
| `TreeRoot` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_TreeNode.h` | 9 |
| `DisplayHandle` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | 69 |
| `RTHandle` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Context.h` | 23 |
| `Matrix2x4` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix2x4.h` | 15 |
| `Matrix2x4Data` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix2x4.h` | 7 |
| `Matrix3x4` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix3x4.h` | 16 |
| `Matrix3x4Data` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix3x4.h` | 8 |
| `Matrix4x4` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix4x4.h` | 17 |
| `Matrix4x4Data` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Matrix4x4.h` | 9 |
| `Rect` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Types2D.h` | 25 |
| `RectData` | Class | `extern/CommonLibF4RD/CommonLibF4/include/RE/Scaleform/Render/Render_Types2D.h` | 14 |

## How to Explore

1. `context({name: "ResourceLibBase"})` — see callers and callees
2. `query({search_query: "render"})` — find related execution flows
3. Read key files listed above for implementation details
4. `explain({target: "<file or symbol>"})` — persisted taint findings (source→sink data flows), when indexed with `--pdg`
