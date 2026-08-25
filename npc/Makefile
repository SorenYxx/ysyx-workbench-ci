SIMULATOR = verilator
NPC_HOME  = $(shell pwd)
CSRC      = $(shell find ./src -name "*.cpp" -o -name "*.c") $(SRC_AUTO_BIND) # auto_bind 文件
INC_PATH  = $(NPC_HOME)/include
REF_SO    = $(abspath $(NEMU_HOME)/build/riscv32-nemu-interpreter-so)
DUMP      = wave.fst
LIBS      += -lcapstone -lreadline -ldl
NPCFLAGS  += -e $(ELF) -d $(REF_SO)
VERILATOR_FLAGS += --output-split 15000 --decorations none -O0

# ----- Kconfig -----
-include $(NPC_HOME)/include/config/auto.conf
include  $(NPC_HOME)/scripts/config.mk

# Build CFLAGS from Kconfig
NPC_CFLAGS = $(foreach v,$(filter CONFIG_%,$(.VARIABLES)),$(if $(filter y,$($(v))),-D$(v)))

# Auto-generate auto.conf from .config
CONFIG_MK := $(NPC_HOME)/include/config/auto.conf
$(CONFIG_MK): $(NPC_HOME)/.config $(CONF)
	@mkdir -p $(NPC_HOME)/include/config
	$(Q)$(CONF) $(silent) --syncconfig $(Kconfig)
	@$(MAKE) --no-print-directory -s compile
# ------------------

# ----- Mode change -----
ifeq ($(CONFIG_SOC),y)
  TOP       = ysyxSoCFull
  VFLAGS    = $(shell find ./vsrc -name "*.v") $(shell find ../ysyxSoC/perip -name "*.v") ../ysyxSoC/build/ysyxSoCFull.v
  VINCS     = -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl
  VERILATOR_DEFS = +define+TOP_SOC # -> define TOP_SOC
  SOCFLAGS += -Wno-UNUSED -Wno-PINCONNECTEMPTY -Wno-DEFPARAM -Wno-ASSIGNDLY -Wno-PROCASSINIT -Wno-SYNCASYNCNET -Wno-UNDRIVEN 
else
  TOP       = ysyx_26010027
  VFLAGS    = $(shell find ./vsrc -name "*.v")
  VINCS     =
  VERILATOR_DEFS =
  SOCFLAGS =
endif
# ------------------

# ----- NVBoard -----
ifeq ($(CONFIG_NVBOARD),y)
BUILD_DIR = obj_dir
NXDC_FILES = constr/ysyxsoc.nxdc # 引脚绑定

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@mkdir -p $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk
else
SRC_AUTO_BIND =
INC_PATH += $(NVBOARD_HOME)/usr/include
endif
# ------------------

INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOP)\""

all: sim compile run

compile: $(SRC_AUTO_BIND)
	@verilator -Wall --autoflush --cc --exe --build --trace-fst --top-module $(TOP) \
	    -Wno-DECLFILENAME \
        --timescale "1ns/1ns" --no-timing \
		$(SOCFLAGS) \
        $(VERILATOR_DEFS) \
        $(VFLAGS) $(VINCS) $(CSRC) $(NVBOARD_ARCHIVE)\
		$(addprefix -CFLAGS , $(CXXFLAGS) $(NPC_CFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS) $(LIBS)) \
		--o V$(TOP)

run: compile
	@echo "--- NPC Running with IMG: $(IMG) ---"
	./obj_dir/V$(TOP) --fst-trace $(DUMP) --img $(IMG) $(NPCFLAGS)

surwave:
	surfer $(DUMP) &

gtkwave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

# microbench train 性能测试
PERF_IMG := $(AM_HOME)/../am-kernels/benchmarks/microbench/build/microbench-riscv32e-ysyxsoc.bin
perf: compile
	@echo "=== NPC Performance Report ==="
	@echo "commit: $$(git rev-parse --short HEAD)"
	@echo "date:   $$(date '+%Y-%m-%d %H:%M:%S')"
	@echo "---"
	@$(MAKE) -C $(AM_HOME)/../am-kernels/benchmarks/microbench ARCH=riscv32e-ysyxsoc mainargs=train insert-arg
	@./obj_dir/V$(TOP) --img $(PERF_IMG) $(NPCFLAGS) --batch 2>&1 | tee perf.log
	@echo "---"
	@echo "[perf]Copy the line below to your performance spreadsheet:"
	@grep -oP '(?<=Total cycles = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Total insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Simulation IPC of npc = )[\d.]+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Load and Store insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Execution insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Computational insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=CSR insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Jump insts = )\d+' perf.log | tr '\n' ' '
	@grep -oP '(?<=Branch insts = )\d+' perf.log
	@echo ""
	@echo "# Then edit this line with freq/area from yosys-sta:"
	@echo "# cd ../yosys-sta && make syn DESIGN=ysyx_26010027_synth ... && make sta ..."

include ../Makefile



# ---------- CI: verilog 合并 / iverilog 四值仿真 ----------
CI_DIR    = $(NPC_HOME)/CI
CI_TB     = $(CI_DIR)/tb.v
MERGED    = build/ysyx_26010027.v
CI_RTL    = vsrc/ysyx_26010027_CLINT.v vsrc/ysyx_26010027_CSR.v \
            vsrc/ysyx_26010027_GPR.v vsrc/ysyx_26010027_IFU.v \
            vsrc/ysyx_26010027_IDU.v vsrc/ysyx_26010027_EXU.v \
            vsrc/ysyx_26010027_LSU.v vsrc/ysyx_26010027_WBU.v \
            vsrc/ysyx_26010027_icache.v vsrc/ysyx_26010027.v

# 合并 RTL 成单文件（子模块在前、顶层在后），输出到 build/ 供 CI 检查
verilog: $(MERGED)

$(MERGED): $(CI_RTL)
	@mkdir -p build
	@cat $(CI_RTL) > $@

# iverilog
sim-iverilog: verilog
	@python3 $(CI_DIR)/bin2hex.py $(IMG) $(CI_DIR)/rtt.hex
	@iverilog -g2012 -o $(CI_DIR)/sim.vvp $(CI_TB) $(MERGED)
	@cd $(CI_DIR) && vvp sim.vvp

# 网表仿真
sim-iverilog-netlist:
	@iverilog -g2012 -o $(CI_DIR)/sim_net.vvp $(CI_TB) $(NETLIST) $(CELLS)
	@cd $(CI_DIR) && vvp sim_net.vvp
