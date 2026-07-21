SIMULATOR = verilator
TOP       = ysyx_26010027
NPC_HOME  = $(shell pwd)
VFLAGS    = $(shell find ./vsrc -name "*.v")
CSRC      = $(shell find ./src -name "*.cpp" -o -name "*.c")
INC_PATH  = $(NPC_HOME)/include
NEMU_HOME = $(abspath ../nemu)
REF_SO    = $(abspath $(NEMU_HOME)/build/riscv32-nemu-interpreter-so)
DUMP      = wave.fst
LIBS      += -lcapstone -lreadline -ldl
NPCFLAGS  += #-f $(ELF) -e $(ELF)#--batch

# Kconfig
-include $(NPC_HOME)/include/config/auto.conf
include  $(NPC_HOME)/scripts/config.mk

# Build CFLAGS from Kconfig
NPC_CFLAGS = $(foreach v,$(filter CONFIG_%,$(.VARIABLES)),$(if $(filter y,$($(v))),-D$(v)))
ifdef CONFIG_DIFFTEST
NPC_CFLAGS += -DREF_SO_FILE="\"$(REF_SO)\""
endif

# Auto-generate auto.conf from .config
CONFIG_MK := $(NPC_HOME)/include/config/auto.conf
$(CONFIG_MK): $(NPC_HOME)/.config $(CONF)
	@mkdir -p $(NPC_HOME)/include/config
	$(Q)$(CONF) $(silent) --syncconfig $(Kconfig)
	@$(MAKE) --no-print-directory -s compile

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        $(VFLAGS) $(CSRC)\
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
