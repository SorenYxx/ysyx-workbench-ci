# NEMU（C 模拟器）知识地图 · 架构总览

> 覆盖范围：`nemu/`，ISA=riscv32（`CONFIG_RVE` 收窄到 16 GPR 对应 RV32E）。
> NEMU 是 C 语言 RISC-V ISA 模拟器，在差分测试中充当**参考实现（ref）**，也是 AM 的 `riscv32e-nemu` 目标平台。

---

## 1. 定位与作用

NEMU 用「指令模式匹配（INSTPAT）」实现取指—译码—执行。它有两重身份：

1. **独立模拟器**：`make run IMG=...` 直接跑裸机镜像（cpu-tests 等）。
2. **差分测试参考**：编译成 `nemu.so`，被 NPC（或另一个 NEMU）通过 `difftest` 加载，每条指令对比寄存器状态。

---

## 2. 目录结构

```
nemu/
├── nemu-main.c             # main 入口
├── include/
│   ├── common.h / macro.h / debug.h / utils.h   # 基础：类型、宏、Log/Assert
│   ├── isa.h / cpu/*.h / memory/*.h / device/*.h # 各模块头文件
│   └── config/*            # menuconfig 生成的 CONFIG_* 配置头
└── src/
    ├── monitor/monitor.c   # 初始化 + 参数解析 + load_img
    ├── monitor/sdb/{sdb,expr,watchpoint}.c  # 简易调试器
    ├── cpu/cpu-exec.c      # 执行循环
    ├── cpu/difftest/{dut,ref}.c   # 差分测试
    ├── engine/interpreter/{init,hostcall}.c   # 引擎入口 + 状态设置
    ├── isa/riscv32/        # RISC-V 特定：inst.c(译码执行) reg.c init.c system/{intr,mmu}.c
    ├── memory/{paddr,vaddr}.c    # 物理/虚拟内存
    ├── device/{device,serial,timer,alarm,vga,keyboard,...}.c + io/{map,mmio}.c
    └── utils/{state,log,disasm,ftrace,timer}.c
```

---

## 3. 执行流程（一次完整运行）

```
main [nemu-main.c]
  └─ init_monitor(argc, argv)   [monitor.c:106]
       ├─ parse_args            # -b -l -d -p -e + IMG
       ├─ init_rand / init_log
       ├─ init_mem              # pmem/flash/mrom/sram/sdram 清零
       ├─ init_device           # init_map + serial/timer/vga/...
       ├─ init_isa              # 载内置 img，pc=RESET_VECTOR
       ├─ load_img              # 读 IMG 到 flash
       ├─ init_ftrace           # 解析 ELF 符号表
       ├─ init_difftest         # dlopen ref .so
       ├─ init_sdb / init_disasm
       └─ welcome
  └─ engine_start()             [engine/interpreter/init.c:20]
       ├─ (CONFIG_TARGET_AM) cpu_exec(-1)
       └─ (else) sdb_mainloop() → batch: cmd_c → cpu_exec(-1)

cpu_exec(n) [cpu-exec.c:115]
  └─ execute(n)                 [cpu-exec.c:89]
       ├─ exec_once(&s, pc)     [cpu-exec.c:51]
       │    └─ isa_exec_once(s) [inst.c:199]
       │         ├─ inst_fetch(&s->snpc, 4)   # 取指，snpc=pc+4
       │         └─ decode_exec(s)            # INSTPAT 译码+执行
       ├─ g_nr_guest_inst++
       ├─ trace_and_difftest    # difftest_step + check_watchpoints
       └─ device_update
```

---

## 4. 模块速查表

| 文件 | 职责 | 关键函数/变量 |
|------|------|--------------|
| `nemu-main.c` | 入口 | `main` |
| `monitor/monitor.c` | 初始化/参数 | `init_monitor`/`parse_args`/`load_img`/`welcome` |
| `cpu/cpu-exec.c` | 执行循环 | `cpu_exec`/`execute`/`exec_once`/`trace_and_difftest`/`statistic`、`cpu`、`g_nr_guest_inst` |
| `engine/interpreter/init.c` | 引擎入口 | `engine_start` |
| `engine/interpreter/hostcall.c` | 状态设置 | `set_nemu_state`/`invalid_inst` |
| `isa/riscv32/inst.c` | 译码执行 | `decode_exec`/`isa_exec_once`/`csr_read`/`csr_write` |
| `isa/riscv32/reg.c` | 寄存器名 | `regs[]`/`isa_reg_display`/`isa_reg_str2val` |
| `isa/riscv32/init.c` | ISA 初始化 | `init_isa`/`restart` |
| `isa/riscv32/system/intr.c` | 异常 | `isa_raise_intr`/`isa_query_intr` |
| `isa/riscv32/system/mmu.c` | 地址翻译 | `isa_mmu_translate`（直接返回 FAIL） |
| `memory/paddr.c` | 物理内存 | `paddr_read`/`paddr_write`/`guest_to_host*`/`init_mem` |
| `memory/vaddr.c` | 虚拟内存包装 | `vaddr_read`/`vaddr_write`/`vaddr_ifetch` |
| `device/io/map.c` | IO 空间 | `new_space`/`map_read`/`map_write` |
| `device/io/mmio.c` | MMIO 注册 | `add_mmio_map`/`mmio_read`/`mmio_write` |
| `device/{serial,timer,alarm}.c` | 设备 | `init_serial`/`serial_io_handler`/`rtc_io_handler` |
| `device/device.c` | 设备总控 | `init_device`/`device_update` |
| `cpu/difftest/dut.c` | difftest 客户端 | `init_difftest`/`difftest_step` |
| `cpu/difftest/ref.c` | difftest 参考导出 | `difftest_memcpy`/`difftest_regcpy`/`difftest_exec` |
| `monitor/sdb/sdb.c` | 调试器主循环 | `sdb_mainloop`/`cmd_table[]` |
| `monitor/sdb/expr.c` | 表达式求值 | `expr`/`eval`/`make_token` |
| `monitor/sdb/watchpoint.c` | 监视点 | `new_wp`/`free_wp`/`check_watchpoints` |
| `utils/state.c` | 状态 | `nemu_state`/`is_exit_status_bad` |
| `utils/{log,disasm,ftrace,timer}.c` | 工具 | `init_log`/`disassemble`/`init_ftrace`/`get_time` |

---

## 5. 关键数据结构

| 结构 | 定义处 | 字段 |
|------|--------|------|
| `CPU_state` | `isa/riscv32/include/isa-def.h:21` | `gpr[16/32]`(word_t) + `pc` + `mstatus/mtvec/mepc/mcause` |
| `ISADecodeInfo` | `isa-def.h:33` | `uint32_t inst` |
| `Decode` | `include/cpu/decode.h:21` | `pc`/`snpc`(静态下条)/`dnpc`(动态下条)/`isa`/`logbuf[128]` |
| `NEMUState` | `include/utils.h:25` | `state`/`halt_pc`/`halt_ret` |

- **`cpu`**（`CPU_state cpu`，全局）：整个模拟器的 CPU 状态，`cpu.gpr[i]` 通过 `gpr(idx)` 访问（`reg.h`，带 `check_reg_idx` 边界检查）。
- **`nemu_state`**（全局）：`NEMU_RUNNING/STOP/END/ABORT/QUIT` 五态。
- **`snpc` vs `dnpc`**：`snpc` 是顺序下条（pc+4），`dnpc` 是实际下条（跳转/异常时不同）。`exec_once` 结束后 `cpu.pc = s->dnpc`。

---

## 6. 关键宏（`include/macro.h`）

| 宏 | 作用 |
|----|------|
| `BITS(x,hi,lo)` | 位提取 `x[hi:lo]`（等价 verilog） |
| `SEXT(x,len)` | 符号扩展到 64 位 |
| `MUXDEF(macro,X,Y)` | 宏已定义选 X，否则 Y（条件编译核心） |
| `IFDEF/IFNDEF/IFONE` | 条件保留代码 |
| `likely/unlikely` | 分支预测提示 |
| `ARRLEN/STRLEN` | 数组/字符串常量长度 |
| `concat/concat3` | 标识符拼接 |

---

## 7. bug 攻击面速查

| 位置 | 正常 | 易错改法 | 症状 |
|------|------|---------|------|
| `inst.c` INSTPAT 模式串 | 正确 opcode 位 | 翻一位 | 指令匹配错/不匹配 |
| `inst.c` 立即数宏 | `immI/S/B/J/U` 位域 | 位偏移错 | 立即数算错 |
| `inst.c` 执行体 | `add = src1+src2` | 写 `-` | 算术结果错 |
| `inst.c` CSR 地址 | `0x341`(mepc) | 写错 | csr 读写错 |
| `inst.c` ecall | `isa_raise_intr(11,pc)` | 11→10 | 异常号错 |
| `inst.c` ebreak | `NEMUTRAP(pc,R(10))` | R(10)→R(11) | GOOD/BAD 判定错 |
| `paddr.c` 分派 | `in_sram/in_sdram` | 顺序/边界错 | 读错内存 |
| `reg.c` 寄存器名 | `regs[32]` | 名/序错 | 调试显示错 |
| `difftest-def.h` | `RISCV_GPR_NUM` 16/32 | 与 CONFIG_RVE 不符 | difftest 错位 |

---

## 8. 分文档索引

| 文档 | 内容 |
|------|------|
| `执行流程.md` | main / monitor / cpu-exec / engine / hostcall 逐函数 |
| `指令译码与执行.md` | inst.c INSTPAT 机制 / 全部指令 / CSR / 中断 / macro.h |
| `内存与设备.md` | paddr / vaddr / guest_to_host / mmio / serial / timer / alarm |
| `调试与差分测试.md` | sdb / expr / watchpoint / difftest / ftrace / disasm |
