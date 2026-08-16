# AM（AbstractMachine）知识地图 · 架构总览

> 覆盖范围：`abstract-machine/`，架构 riscv32e，三平台 `riscv32e-nemu` / `riscv32e-npc` / `riscv32e-ysyxsoc`。
> 目标是掌握到「考核中能定位注入的 bug」的程度：每个文件/函数/变量知道它在干什么、谁调用它、改错它会有什么症状。

---

## 1. AM 是什么

AM 是硬件抽象层（AbstractMachine），位于裸机程序与具体硬件/模拟器之间。上层用户程序（cpu-tests、RT-Thread 等）只依赖 AM 提供的一套统一 API，不感知底层是 nemu、npc 还是 ysyxsoc。

AM 把功能划分成 **5 个可选的扩展层**，从低到高：

| 层 | 缩写 | 提供的 API | 必须实现？ |
|----|------|-----------|-----------|
| 图灵机 | **TRM** | `main` / `putch` / `halt` / `heap` | 是（最小可运行） |
| 输入输出 | **IOE** | `ioe_init` / `ioe_read` / `ioe_write` | 否 |
| 上下文切换 | **CTE** | `cte_init` / `yield` / `kcontext` / `ienabled` / `iset` | 否 |
| 虚拟内存 | **VME** | `vme_init` / `protect` / `map` / `ucontext` | 否 |
| 多处理器 | **MPE** | `mpe_init` / `cpu_count` / `atomic_xchg` | 否 |

每层对应的声明都在 `am/include/am.h`，详见《API与数据结构.md》。

---

## 2. 目录结构

```
abstract-machine/
├── Makefile              # 顶层构建：解析 ARCH → include scripts/$(ARCH).mk
├── am/
│   ├── include/
│   │   ├── am.h          # 全部 AM API 声明 + Area/Event/AddrSpace 类型
│   │   ├── amdev.h       # IOE 设备寄存器（AM_DEVREG 宏生成枚举+结构体）
│   │   └── arch/
│   │       └── riscv.h   # Context 结构体 + NR_REGS + GPR 宏（经 ARCH_H 被 am.h 引入）
│   └── src/
│       ├── riscv/
│       │   ├── riscv.h   # MMIO 访问 inb/outb… + PTE/MODE 常量
│       │   ├── nemu/     # nemu 平台：cte.c / trap.S / vme.c / start.S
│       │   ├── npc/      # npc 平台：trm.c / cte.c / trap.S / ioe.c / timer.c / input.c / vme.c / mpe.c / start.S / libgcc/
│       │   └── ysyxsoc/  # ysyxsoc 平台：trm.c / cte.c / trap.S / ioe.c / timer.c / input.c / gpu.c / vme.c / mpe.c / start.S / start_ss.S / ysyxsoc.h / libgcc/
│       └── platform/
│           ├── nemu/     # nemu 的 IOE（ioe/ 目录）+ trm.c + mpe.c + include/nemu.h
│           └── dummy/    # 空实现桩（trm/ioe/vme/mpe/cte 都是返回 false 或空）
├── klib/                 # 轻量 C 库
│   ├── include/klib.h / klib-macros.h
│   └── src/stdio.c string.c stdlib.c int64.c cpp.c
└── scripts/              # 构建脚本 + 链接脚本
    ├── isa/riscv.mk
    ├── platform/{nemu,npc,ysyxsoc}.mk
    ├── riscv32e-{nemu,npc,ysyxsoc}.mk   # 三个 ARCH 入口
    ├── linker.ld        # nemu/npc 用
    └── ysyxsoc.ld       # ysyxsoc 用
```

---

## 3. 三平台差异（riscv32e 视角）

AM 的「平台」= `ARCH` 的第二个字段（`riscv32e-<platform>`）。同一份 API，不同平台换不同实现文件：

| 能力 | nemu | npc | ysyxsoc |
|------|------|-----|---------|
| TRM 实现 | `platform/nemu/trm.c` | `riscv/npc/trm.c` | `riscv/ysyxsoc/trm.c` |
| CTE 实现 | `riscv/nemu/cte.c` | `riscv/npc/cte.c` | `riscv/ysyxsoc/cte.c` |
| VME 实现 | `riscv/nemu/vme.c`（真实现） | `platform/dummy/vme.c`（空） | `platform/dummy/vme.c`（空） |
| MPE 实现 | `platform/nemu/mpe.c` | `platform/dummy/mpe.c`（空） | `platform/dummy/mpe.c`（空） |
| IOE 实现 | `platform/nemu/ioe/*.c` | `riscv/npc/ioe.c` + timer.c/input.c | `riscv/ysyxsoc/ioe.c` + timer.c/input.c/gpu.c |
| 串口地址 | `0xa00003f8`(DEVICE_BASE+0x3f8) | `0x10000000` | `0x10000000` |
| halt 方式 | `nemu_trap`(ebreak) | `ebreak` | `ysyxsoc_trap`(mv a0; ebreak) |
| 启动 | 单级 start.S | 单级 start.S | **两级引导** start.S + start_ss.S |

**关键差异——ysyxsoc 的两级引导**（其余平台没有）：
- `start.S`（`.section entry`）：把 `.ssbl` 段从 flash 拷到 sram，跳 `_start_ss`
- `start_ss.S`（`.section ssbl`）：把 text/rodata/data 从 flash 拷到 sdram，清 bss，设 sp，跳 `_trm_init`

原因：ysyxsoc 的 flash 是只读的（0x30000000），代码要在 sdram（0xa0000000）里跑，所以需要 boot 代码自己搬运。

---

## 4. 启动流程（一次完整运行）

```
(链接脚本 ENTRY(_start))
_start [start.S]
  ├─ mv s0, zero            ; 帧指针清零
  ├─ (ysyxsoc: 拷贝 ssbl 段 / 拷贝 text+data / 清 bss)
  └─ la sp, _stack_pointer  ; 设栈指针（链接脚本定义）
       call _trm_init
          _trm_init [trm.c]
            ├─ (ysyxsoc: uart_init() 初始化串口 + 打印 CPU ID)
            └─ int ret = main(mainargs);  ; 用户程序的 main
                  halt(ret)               ; ebreak，模拟器捕获并判断 ret
```

符号 `_stack_pointer` / `_heap_start` / `_pmem_start` 等都由链接脚本定义（`scripts/linker.ld` 或 `scripts/ysyxsoc.ld`），详见《构建与脚本.md》。

---

## 5. 模块速查表（一页纸）

| 文件 | 职责 | 关键函数/变量 |
|------|------|--------------|
| `am.h` | API 声明 | `Area`/`Event`/`AddrSpace`、`heap`、`putch`、`halt`、`ioe_*`、`cte_*`、`vme_*`、`mpe_*` |
| `arch/riscv.h` | Context 结构 | `Context{gpr,mcause,mstatus,mepc,pdir}`、`NR_REGS`、`GPR1` |
| `riscv/riscv.h` | MMIO 访问 | `inb/inw/inl/outb/outw/outl`、`PTE_V/R/W/X/U`、`MODE_M` |
| `amdev.h` | IOE 设备寄存器 | `AM_DEVREG` 宏、`AM_TIMER_UPTIME` 等 24 个寄存器、`AM_KEY_*` |
| `trm.c` | 程序入口/退出 | `_trm_init`、`putch`、`halt`、`heap`、`uart_init`(ysyxsoc) |
| `cte.c` | 异常处理/上下文 | `__am_irq_handle`、`cte_init`、`kcontext`、`yield` |
| `trap.S` | 异常入口汇编 | `__am_asm_trap`（保存/恢复 Context） |
| `ioe.c` | 设备分发表 | `ioe_init/ioe_read/ioe_write`、`lut[]` |
| `timer.c` | 时钟 | `__am_timer_uptime/rtc`、`read_time`(ysyxsoc) |
| `input.c` | 键盘 | `__am_input_keybrd`、`lut[]`(scan code, ysyxsoc) |
| `gpu.c` | 帧缓冲(仅 ysyxsoc) | `__am_gpu_config/fbdraw/status` |
| `vme.c` | 虚存 | nemu 真实现；其余 dummy |
| `mpe.c` | 多核 | dummy：`cpu_count()==1` |
| `klib/*` | 轻量 C 库 | `printf`、`memset`、`malloc`、`__divdi3` |
| `scripts/*.mk` | 构建脚本 | AM_SRCS、LDSCRIPTS、CROSS_COMPILE |

---

## 6. 构建系统概览

调用链（以 `make ARCH=riscv32e-ysyxsoc` 为例）：

```
Makefile
  ├─ 校验 $AM_HOME、$ARCH 合法
  ├─ ARCH 拆分: ISA=riscv32e, PLATFORM=ysyxsoc
  ├─ -include scripts/riscv32e-ysyxsoc.mk
  │     ├─ include isa/riscv.mk        → CROSS_COMPILE=riscv64-linux-gnu-，ARCH_H=arch/riscv.h
  │     ├─ include platform/ysyxsoc.mk → AM_SRCS 列表、LDSCRIPTS、LDFLAGS
  │     ├─ COMMON_CFLAGS += -march=rv32e_zicsr_zifencei -mabi=ilp32e
  │     └─ AM_SRCS += libgcc/*（64 位除法/乘法软浮点）
  ├─ 编译 SRCS（用户程序）→ .o
  ├─ 递归 make 构建 am.a 和 klib.a（LIBS += am klib）
  └─ ld 链接 → ELF → objcopy → .bin
```

关键宏/变量：
- `ARCH`：`riscv32e-<platform>`，决定一切。
- `AM_SRCS`：该平台要编译的 AM 源文件清单（平台差异核心）。
- `LDSCRIPTS`：链接脚本路径。
- `CROSS_COMPILE`：`riscv64-linux-gnu-`。
- `-march=rv32e` / `-mabi=ilp32e`：RV32E 指令集，16 个 GPR（对应 `__riscv_e` 宏 → `NR_REGS=16`）。

详细见《构建与脚本.md》。

---

## 7. bug 攻击面速查（AM 部分）

已知的「改一行就出 bug」高发点（详见各分文档 + `bug.md`）：

| 位置 | 正常 | 易错改法 | 症状 |
|------|------|---------|------|
| `arch/riscv.h` Context 字段序 | gpr→mcause→mstatus→mepc→pdir | 交换 mcause/mepc | `case 0xb` 不匹配，mret 跳飞 |
| `trap.S` `OFFSET_EPC` | `(NR_REGS+2)*XLEN` | `+3` | mepc 存到 pdir 槽，mret 跳飞 |
| `cte.c` `kcontext` | `ctx->gpr[10]=arg` | 写成 `gpr[11]` | 线程首跑 a0 是垃圾 |
| `cte.c` `__am_irq_handle` | `case 0xb: mepc+=4` | 删 `+=4` | ecall 死循环 |
| `cte.c` `kcontext` | `mstatus=0x1800` | `0x0800` | mret 进 U-mode |
| `yield()` | `li a5,-1; ecall` | 写错寄存器 | 异常号不是 -1 |
| `trm.c` `putch`(ysyxsoc) | 等 LSR&0x20 | 删等待 | 串口乱码/丢字符 |
| `linker.ld` `.bss` | 加 `> sram`/`> sdram` | 删 region | BSS 在 flash，清零失效 |

**排查套路**（通用）：
1. 看症状——`HIT BAD TRAP`（halt(1)）、死循环、跳飞（pc 乱）、无输出。
2. ecall/yield 相关 → 查 `cte.c` + `trap.S` + `arch/riscv.h`（三者内存布局必须一致）。
3. 输出乱码 → 查 `putch`/串口地址/`uart_init`。
4. 全局变量值乱 → 查链接脚本 `.bss`/`.data` 的 VMA/LMA。
5. 用 `objdump -d` + `objdump -h` 交叉验证。

---

## 8. 分文档索引

| 文档 | 内容 |
|------|------|
| `API与数据结构.md` | am.h / arch/riscv.h / riscv.h / amdev.h / klib-macros.h 逐项解析（含 VME/MPE API 声明） |
| `TRM.md` | trm.c / start.S / putch / halt / _trm_init / heap（nemu / npc / ysyxsoc 三套分列） |
| `CTE.md` | cte.c / trap.S / Context 布局约定 / yield / kcontext（三套分列） |
| `IOE.md` | ioe.c / timer.c / input.c / gpu.c / 设备寄存器（三套分列） |
| `klib.md` | stdio.c / string.c / stdlib.c / int64.c / cpp.c |
| `构建与脚本.md` | Makefile / scripts/*.mk / linker.ld / ysyxsoc.ld（三平台分列） |
