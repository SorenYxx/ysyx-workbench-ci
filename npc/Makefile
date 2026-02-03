SIMULATOR = verilator
TOP = minirv
VFLAGS = $(shell find ./vsrc -name "*.v")
CSRC = $(shell find ./csrc -name "*.cpp")
INC_PATH = $(NPC_HOME)/include
DUMP = wave.fst

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        $(VFLAGS) $(CSRC)\
		-CFLAGS "-I$(INC_PATH)" \
		--o V$(TOP)

run: clean compile
	@echo "NPC received IMG = $(IMG)"
	./obj_dir/V$(TOP) --fst-trace $(DUMP) --img $(IMG)

wave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

include ../Makefile
