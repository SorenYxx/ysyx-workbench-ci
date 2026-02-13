SIMULATOR = verilator
TOP       = minirv
VFLAGS    = $(shell find ./vsrc -name "*.v")
CSRC      = $(shell find ./csrc -name "*.cpp" -o -name "*.c")
INC_PATH  = $(shell pwd)/include
NEMU_HOME = $(abspath ../nemu)
REF_SO    = $(abspath $(NEMU_HOME)/build/riscv32-nemu-interpreter-so)
DUMP      = wave.fst
LIBS      += -lcapstone -lreadline -ldl

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        $(VFLAGS) $(CSRC)\
		-CFLAGS "-I$(INC_PATH)" \
		-LDFLAGS "$(LIBS)" \
		--o V$(TOP)

run: compile
	@echo "--- NPC Running with IMG: $(IMG) ---"
	@echo "--- Ref Shared Object: $(REF_SO) ---"
	./obj_dir/V$(TOP) --fst-trace $(DUMP) --img $(IMG) --diff $(REF_SO)

wave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

include ../Makefile
