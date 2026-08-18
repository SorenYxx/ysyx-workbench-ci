# 构建环境与链接脚本 · 知识地图

> 覆盖三类构建系统（nemu / npc / AM）+ Kconfig/menuconfig 配置机制 + 链接脚本（linker.ld / ysyxsoc.ld）。
> 目标是掌握到「考核中能定位注入到 Makefile/Kconfig/链接脚本里的 bug」的程度。

---

## 1. 构建链全景（一次完整测试）

以 `make ARCH=riscv32e-ysyxsoc ALL=add run`（在 `am-kernels/tests/cpu-tests`）为例：

```
am-kernels/tests/cpu-tests/Makefile
  └─ Makefile.%: 生成临时 Makefile.add (NAME=add, SRCS=tests/add.c, include $(AM_HOME)/Makefile)
        AM 顶层 Makefile
          ├─ 校验 $ARCH，拆分 ISA=riscv32e / PLATFORM=ysyxsoc
          ├─ -include scripts/riscv32e-ysyxsoc.mk  (→ isa/riscv.mk + platform/ysyxsoc.mk)
          ├─ 编译 add.c → .o
          ├─ 递归 make 构建 am.a / klib.a
          └─ ld + ysyxsoc.ld → ELF → objcopy → .bin
        run: make -C $(NPC_HOME) run CONFIG_SOC=y IMG=... ELF=...
          npc/Makefile
            ├─ 生成 auto.conf（Kconfig → .config → syncconfig）
            ├─ verilator --cc --exe --build 编译 VysyxSoCFull
            └─ ./obj_dir/VysyxSoCFull --img ... --diff nemu.so（difftest）
```

---

## 2. 三个项目的构建系统概览

| 项目 | 配置方式 | 编译工具 | 特点 |
|------|---------|---------|------|
| **nemu** | Kconfig（自带 tools/kconfig） | gcc/g++ | 三种 target：ELF（自己跑）/ SHARE（ref.so）/ AM |
| **npc** | Kconfig（复用 nemu 的 tools/kconfig） | verilator | `CONFIG_SOC` 切换「SoC 模式 / 纯 CPU 模式」 |
| **AM** | 无 Kconfig，靠 `ARCH` 变量 | 交叉 gcc（riscv64-linux-gnu-） | `scripts/riscv32e-*.mk` 组合 isa + platform |

共同点：nemu 和 npc 都用 **Kconfig → menuconfig → .config → auto.conf/autoconf.h** 这条配置链；AM 用纯 Makefile 变量。

---

## 3. Kconfig / menuconfig 机制

```
Kconfig（描述配置项） -- menuconfig(mconf) --> .config（用户选择）
                                                  │
                                    conf --syncconfig --> auto.conf（Makefile 用）
                                                        + autoconf.h（C 头文件用）
```

- **nemu**：`nemu/tools/kconfig/build/{conf,mconf}`，`scripts/config.mk` 提供 `menuconfig` 目标。
- **npc**：`scripts/config.mk` 里 `KCONFIG_PATH := $(NEMU_HOME)/tools/kconfig`，**复用 nemu 的 kconfig 工具**（所以 npc 依赖 `$NEMU_HOME`）。
- **auto.conf** 被 Makefile `-include`，`CONFIG_XXX=y` 成为 make 变量，供 `SRCS-$(CONFIG_XXX)` 等条件展开。
- **autoconf.h** 被 `common.h` `#include <generated/autoconf.h>`，`CONFIG_XXX` 成为 C 宏。

关键区别（坑点）：
- **npc** 用 `NPC_CFLAGS = $(foreach v,$(filter CONFIG_%,$(.VARIABLES)),$(if $(filter y,$($(v))),-D$(v)))` 把 `CONFIG_XXX=y` 转成 `-DCONFIG_XXX` 直接传编译器（不依赖 autoconf.h）。
- **nemu** 用 autoconf.h 头文件（`common.h` include），**改了 .config 必须重新 `syncconfig` 生成 autoconf.h 并重编译**（只改 auto.conf 不生效，之前 difftest 调试踩过这个坑）。

---

## 4. 分文档索引

| 文档 | 内容 |
|------|------|
| `nemu构建系统.md` | nemu/Makefile / filelist.mk / build.mk / native.mk / difftest.mk / Kconfig(REF_SOC 等) |
| `npc构建系统.md` | npc/Makefile / config.mk / Kconfig / verilator 编译 / CONFIG_SOC 切换 |
| `AM构建与链接脚本.md` | AM Makefile / scripts/*.mk / linker.ld / ysyxsoc.ld（VMA/LMA） |
