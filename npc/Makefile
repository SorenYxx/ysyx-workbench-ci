SIMULATOR = verilator
TOP       = ysyxSoCFull
NPC_HOME  = $(shell pwd)
VFLAGS    = $(shell find ./vsrc -name "*.v") $(shell find ../ysyxSoC/perip -name "*.v") ../ysyxSoC/build/ysyxSoCFull.v
VINCS     = -I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl
CSRC      = $(shell find ./src -name "*.cpp" -o -name "*.c")
INC_PATH  = $(NPC_HOME)/include
ELF    	  = $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
DUMP      = wave.fst
LIBS      += -lcapstone -lreadline -ldl
NPCFLAGS  += -e $(ELF)#--batch

# Kconfig
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

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        -Wno-UNUSED -Wno-PINCONNECTEMPTY -Wno-DECLFILENAME \
        -Wno-DEFPARAM -Wno-ASSIGNDLY -Wno-PROCASSINIT -Wno-SYNCASYNCNET \
        -Wno-UNDRIVEN \
        --timescale "1ns/1ns" --no-timing \
        $(VFLAGS) $(VINCS) $(CSRC)\
		-CFLAGS "-I$(INC_PATH) $(NPC_CFLAGS)" \
		-LDFLAGS "$(LIBS)" \
		--o V$(TOP)

run: compile
	@echo "--- NPC Running with IMG: $(IMG) ---"
	./obj_dir/V$(TOP) --fst-trace $(DUMP) --img $(IMG) $(NPCFLAGS)

wave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

include ../Makefile
