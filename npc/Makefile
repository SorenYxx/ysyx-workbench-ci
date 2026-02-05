SIMULATOR = verilator
TOP = minirv
VFLAGS = $(shell find ./vsrc -name "*.v")
CSRC = $(shell find ./csrc -name "*.cpp" -o -name "*.c")
INC_PATH = $(shell pwd)/include
DUMP = wave.fst
LIBS += -lcapstone -lreadline
IMG ?= $(NPC_HOME)/../am-kernels/tests/cpu-test/build/dummy-riscv32e-npc.bin

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        $(VFLAGS) $(CSRC)\
		-CFLAGS "-I$(INC_PATH)" \
		-LDFLAGS "$(LIBS)" \
		--o V$(TOP)

run: compile
	@echo "NPC received IMG = $(IMG)"
	./obj_dir/V$(TOP) --fst-trace $(DUMP) --img $(IMG)

wave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

include ../Makefile
