# NPC 硬件（RTL 五级流水线）· 知识地图

> 覆盖 `npc/vsrc/` 全部 Verilog：五级流水线 IFU/IDU/EXU/LSU/WBU + GPR/CSR/CLINT/icache + 顶层仲裁器。
> 这是「多周期 → 五级流水线」改造的成果，也是硬件 bug 注入的主战场。

---

## 1. 整体结构

```
                      前递(RAW/load-use/csr)
        ┌──────────────────────────────────────┐
        │                                      │
IFU ──► IDU ──► EXU ──► LSU ──► WBU（提交/写回）
 │                │                            
 icache           │exu_flush（冲刷 IFU/IDU）
                  └──────────────────────────► IFU/IDU
```

| 模块 | 文件 | 职责 |
|------|------|------|
| IFU | `ysyx_26010027_IFU.v` | 取指（AXI4 AR/R + icache），分支预测「一定跳转」 |
| icache | `ysyx_26010027_icache.v` | 指令缓存（4 路组相联，仅 SOC 模式启用） |
| IDU | `ysyx_26010027_IDU.v` | 译码（纯组合逻辑）+ 控制信号 + CSR 译码 |
| EXU | `ysyx_26010027_EXU.v` | ALU + 分支判断 + 前递 + load-use 停顿 + flush |
| LSU | `ysyx_26010027_LSU.v` | 访存（AXI4 五通道）+ load 数据整理 |
| WBU | `ysyx_26010027_WBU.v` | 写回（选数据源）+ 实例化 GPR/CSR |
| GPR | `ysyx_26010027_GPR.v` | 寄存器堆（16×32，RV32E） |
| CSR | `ysyx_26010027_CSR.v` | 控制状态寄存器 |
| CLINT | `ysyx_26010027_CLINT.v` | mtime 计时器（AXI-Lite） |
| 顶层 | `ysyx_26010027.v` | 模块互联 + 仲裁器 + 提交统计/DPI-C |

---

## 2. 数据通路（valid/ready 握手）

各级通过 **valid/ready 握手**传递，不是固定拍锁存——这是「弹性流水线」的关键：

```
IFU → IDU:  ifu_idu_valid / idu_ifu_ready / ifu_idu_pc / ifu_idu_inst
IDU → EXU:  idu_exu_valid / exu_idu_ready / (pc, inst, imm, alu_op, mem_w, mem_r,
            alu_arc1, alu_arc2, reg_w, rf_res, waddr, jump, branch, fencei, csr_*)
EXU → LSU:  exu_lsu_valid / lsu_exu_ready / (pc, inst, mem_w, mem_r, mem_addr,
            wdata, reg_w, rf_res, waddr, alu_result, csr_*)
LSU → WBU:  lsu_wbu_valid / wbu_lsu_ready / (pc, inst, reg_w, rf_res, waddr,
            alu_result, mem_result, csr_*, lsu_load_inflight)
```

### 关键控制信号语义

| 信号 | 语义 |
|------|------|
| `idu_ifu_ready` | `exu_idu_ready | !idu_exu_valid`：EXU 能收 或 IDU 无待发 |
| `exu_idu_ready` | `(lsu_exu_ready | !exu_lsu_valid) && !load_use_stall` |
| `lsu_exu_ready` | `!l_busy`：LSU 空闲 |
| `lsu_wbu_valid` | `l_busy && (!mem_op || mem_done)`：提交有效 |
| `wbu_lsu_ready` | `lsu_wbu_valid`：WBU 总是 ready（写回不阻塞） |

---

## 3. 停顿 / 冲刷 / 前递

### 3.1 停顿

| 停顿 | 触发 | 效果 |
|------|------|------|
| 取指停顿 | IFU `state==WAIT`（AXI 未响应） | `ifu_idu_valid` 不置位 |
| load-use 停顿 | EXU `load_use_stall` | `exu_idu_ready=0`，阻塞 IDU/IFU |
| 访存停顿 | LSU `l_busy` | `lsu_exu_ready=0`，阻塞 EXU |

`load_use_stall`（EXU.v:151）覆盖两种情况：load 在 EXU→LSU 寄存器、或已在 LSU 访存未回（`lsu_load_inflight`）。

### 3.2 冲刷（`exu_flush`）

EXU 在以下情况置 `exu_flush=1` + `exu_flush_pc`：

| 情况 | `exu_flush_pc` |
|------|---------------|
| 跳转（jump/branch） | `dnpc = result`（分支预测正确则 flush 掉预测错的下一条） |
| ecall | `trap_pc = exu_mtvec` |
| mret | `trap_pc = exu_mepc` |
| fence.i | `idu_exu_pc + 4` |

`exu_flush` 同时清 IFU（`ifu_idu_inst<=0`、`ifu_idu_valid<=0`）和 IDU（`idu_exu_valid<=0`）。

### 3.3 前递

EXU 里三种前递（EXU.v:87-94、139-157）：

| 前递 | 条件 | 数据 |
|------|------|------|
| 1 拍 RAW（`raw_x[0]`） | 读地址 == `exu_lsu_waddr` 且邻级写 | `lsu_fwd`（EXU→LSU 的 alu_result 或 pc+4） |
| 2 拍 RAW（`raw_x[1]`） | 读地址 == `lsu_wbu_waddr` 且二级写 | `wbu_fwd`（LSU→WBU 的 alu_result 或 pc+4） |
| load-use（`load_use_x`） | 读地址 == `lsu_wbu_waddr` 且 load 写回 | `lsu_wbu_mem_result` |
| CSR（`csr_fwd`） | 读 CSR == 写 CSR | `exu_lsu_csr_wdata`/`lsu_wbu_csr_wdata` |

---

## 4. 仲裁器（顶层 ysyx_26010027.v）

icache（取指）与 LSU（访存）共享一个 AXI4 Master 接口，`grant` 两状态仲裁：

```verilog
IFU_GRANT: 有 LSU 请求且 IFU 空闲 → LSU_GRANT，否则 IFU_GRANT
LSU_GRANT: handshake_lsu_r || handshake_lsu_b → IFU_GRANT
```

- IFU 优先，LSU 仅在 IFU 空闲时借总线。
- SOC 模式下，CLINT 的访问在 CPU 内部译码（`arb_araddr >= RTC_BASE`），不经过 io_master。

---

## 5. 提交与 DPI-C

提交阶段（WBU）通过 DPI-C 向仿真环境报告状态：

| DPI-C 函数 | 用途 |
|-----------|------|
| `get_cpu_state` | 每拍报告提交类型（load/store/alu/csr/jump/branch）+ icache 统计 |
| `get_reg` | GPR 写回时同步 `R[]` |
| `get_csr` | CSR 写时同步 `cpu_n` |
| `finish_sim` | ebreak 时结束仿真 |
| `ftrace_print` | 函数调用追踪 |
| `cpu_trace`/`ifu_trace` | 提交/交付追踪（已注释） |

---

## 6. bug 攻击面速查

| 位置 | 正常 | 易错改法 | 症状 |
|------|------|---------|------|
| IDU opcode 译码 | `inst[6:0]` | 位错 | 指令全错 |
| IDU 立即数 | `imm_B/J/S` 位域 | 位偏移错 | 立即数算错 |
| EXU alu_op | case 各运算 | 运算符错 | 算术错 |
| EXU 前递条件 | `raw_x` 地址/valid 判断 | 漏条件 | 数据冒险错 |
| LSU AXI 状态机 | W_IDLE/W_WAIT/W_RESP | 状态跳转错 | 访存挂死 |
| LSU 数据移位 | `wdata_shifted`/`rdata_shifted` | 移位方向错 | 非对齐访存错 |
| CSR 地址 | `0x341`(mepc) | 写错 | CSR 读写错 |
| CSR ecall | `mcause<=11` | 改 10 | 异常号错 |
| 仲裁器 grant | IFU 优先逻辑 | 条件错 | 总线死锁/饿死 |
| IFU 分支预测 | 「一定跳转」 | 改「不跳」 | 分支性能/正确性 |

---

## 7. 分文档索引

| 文档 | 内容 |
|------|------|
| `取指与译码.md` | IFU（AXI + 分支预测 + 冲刷）+ icache + IDU 译码 |
| `执行与访存.md` | EXU（ALU + 前递 + load-use + flush）+ LSU（AXI 五通道） |
| `写回与CSR.md` | WBU + GPR + CSR + CLINT |
| `顶层与仲裁.md` | ysyx_26010027.v 顶层互联 + 仲裁器 + AXI 接口 + DPI-C |
