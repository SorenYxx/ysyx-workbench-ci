SIMULATOR = verilator
TOP = minirv
VFLAGS = $(shell find ./vsrc -name "*.v")
CFLAGS = $(shell find ./csrc -name "*.cpp")
DUMP = wave.fst

all: sim compile run

compile:
	@verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
        $(VFLAGS) $(CFLAGS) --o V$(TOP)

run:
	./obj_dir/V$(TOP) --fst-trace $(DUMP)

wave:
	gtkwave $(DUMP) &

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	@rm -rf obj_dir $(DUMP) *~ *.log

include ../Makefile
