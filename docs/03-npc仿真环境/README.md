# NPC 仿真环境（C++ 仿真平台）· 知识地图

> 覆盖 `npc/src/`（C/C++ 仿真代码）+ `npc/include/`（头文件）。是 Verilator 生成的 `VysyxSoCFull`/`Vysyx_26010027` 的宿主程序，负责复位、时钟推进、镜像加载、设备模拟、difftest、调试器。

---

## 1. 执行流程（一次运行）

```
main [main.cpp]
  └─ sim_init(argc, argv)      [monitor.c]
       ├─ parse_args            # -d(diff) -e(elf)
       ├─ init_img              # 手动扫 argv 找 --img，load_img
       ├─ init_verilator        # Verilated::commandArgs + reset 时序
       ├─ init_csr              # cpu_n 的 CSR 清零
       ├─ sdb_set_batch_mode    # CONFIG_BATCH_MODE
       ├─ init_ftrace           # CONFIG_FTRACE
       ├─ init_device           # CONFIG_DEVICE（serial/timer MMIO）
       ├─ init_difftest         # CONFIG_DIFFTEST（dlopen ref.so）
       ├─ init_nvboard          # CONFIG_NVBOARD
       ├─ init_sdb              # init_regex + init_wp_pool
       └─ welcome
  └─ sdb_mainloop()            [sdb.c]
       └─ batch: cmd_c → cpu_exec(-1)
            cpu_exec(n) [cpu-exec.c]
              └─ 循环: step_and_eval() + debug()
                   step_and_eval: clock 0→1→1 (eval)
                   debug: CPU_VALID() 时 check_watchpoints/check_difftest/total_inst++
  └─ sim_exit()                # statistics + 释放
  └─ is_exit_status_bad()      # GOOD/BAD 判定
```

---

## 2. 模块速查表

| 文件 | 职责 | 关键函数/变量 |
|------|------|--------------|
| `main.cpp` | 入口 | `main` |
| `monitor/monitor.c` | 初始化/参数/镜像 | `sim_init`/`parse_args`/`load_img`/`init_img`/`init_verilator` |
| `cpu/cpu-exec.c` | 主执行循环 | `cpu_exec`/`step_and_eval`/`debug`/`finish_sim`/`sim_exit`/`statistics`、`top`、`cpu_n`、`R[]` |
| `memory/paddr.c` | 物理内存 + DPI-C | `pmem`/`flash`/`mem_regions[]`/`guest_to_host`/`guest_to_flash`/`pmem_read`/`pmem_write`/`mrom_read`/`flash_read` |
| `isa/reg.c` | 寄存器同步 | `R[]`/`get_reg`/`get_csr`/`regs[]`/`isa_reg_display` |
| `device/device.c` | 设备总控 | `init_device` |
| `device/map.c` | IO 空间 | `new_space`/`map_read`/`map_write`/`get_time` |
| `device/mmio.c` | MMIO 注册/访问 | `add_mmio_map`/`mmio_read`/`mmio_write` |
| `device/serial.c` | 串口（写 TX） | `serial_io_handler` |
| `device/timer.c` | RTC（host 时间） | `rtc_io_handler` |
| `cpu/difftest/dut.c` | 差分测试 | `init_difftest`/`check_difftest`/`isa_difftest_checkregs` |
| `monitor/sdb/sdb.c` | 调试器主循环 | `sdb_mainloop`/`cmd_table[]` |
| `monitor/sdb/expr.c` | 表达式求值 | `expr`/`eval`/`make_token` |
| `monitor/sdb/watchpoint.c` | 监视点 | `new_wp`/`check_watchpoints` |
| `utils/ftrace.c` | 函数追踪 | `init_ftrace`/`ftrace_print` |
| `include/npc.h` | 核心宏/类型 | `CPU_PC()`/`CPU_VALID()`/`CPU_state`/`NPCState` |
| `include/common.h` | Log/Assert/类型 | `Log`/`Assert`/`word_t`/`paddr_t`/`DIFFTEST_*` |

---

## 3. 核心类型与宏

### 3.1 `npc.h`

```c
#define CPU_PC()    (top->rootp->...lsu_wbu_pc)    // 提交指令的 PC
#define CPU_INST()  (top->rootp->...lsu_wbu_inst)  // 提交指令
#define CPU_REG_W() (top->rootp->...lsu_wbu_reg_w) // 提交是否写回
#define CPU_VALID() (exu_valid)                    // 提交有效（get_cpu_state 更新）
#define PC_START    MUXDEF(CONFIG_SOC, 0x30000000, 0x80000000)

typedef struct { uint32_t gpr[32]; uint32_t pc; uint32_t mstatus/mtvec/mepc/mcause; } CPU_state;
typedef struct { int state; uint32_t halt_pc; } NPCState;
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
```

- **`CPU_VALID() = exu_valid`**：`exu_valid` 由 DPI-C `get_cpu_state` 每拍更新，等于 RTL 的 `lsu_wbu_valid`（提交有效）。difftest 在**提交点**对比（流水线适配的关键）。

### 3.2 `common.h`

```c
#define Log(format, ...)  printf(ANSI_FG_BLUE "[ysyxSoC] " format ANSI_NONE "\n", ##__VA_ARGS__)
#define Assert(cond, ...) /* 失败时 sim_exit() + assert */
#define DIFFTEST_TO_REF 1    // direction: DUT → ref
#define DIFFTEST_FROM_REF 0  // direction: ref → DUT
extern uint32_t R[31];
typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
```

---

## 4. bug 攻击面速查

| 位置 | 正常 | 易错改法 | 症状 |
|------|------|---------|------|
| `load_img` 目标 | `guest_to_flash(PC_START)`(SOC) | 改 guest_to_host | 镜像加载错位置 |
| 复位时序 | `reset=1` 跑 `RESET_TIME` 拍 | 减少拍数 | SoC 同步器未填满 |
| `CPU_VALID` | `exu_valid`(提交) | 改用 ifu 有效 | 计数/difftest 错 |
| `finish_sim` 判定 | `R[10]==0`(a0) | 改 R[11] | GOOD/BAD 判错 |
| `pmem_read` 分派 | find_region | 边界错 | 读错内存 |
| `get_reg`/`get_csr` | 同步 R[]/cpu_n | 地址映射错 | difftest 错位 |
| `mmio_read` unmapped | `NPC_ABORT` | 改 panic | 行为差异 |
| difftest 对比 | gpr + csr | 漏 csr | 漏报 |
| expr 解引用 | `pmem_read(addr)` | 用错函数 | 表达式错 |
| `is_exit_status_bad` | `NPC_END && R[10]==0` | 逻辑错 | 返回码错 |

---

## 5. 分文档索引

| 文档 | 内容 |
|------|------|
| `初始化与主循环.md` | main.cpp / monitor.c(sim_init 全链路) / npc.h / common.h |
| `执行循环与内存.md` | cpu-exec.c / paddr.c(mem_regions + DPI-C) |
| `设备与调试器.md` | device/* / sdb/* / reg.c / difftest / ftrace |
