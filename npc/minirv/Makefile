SIMULATOR = verilator
TOP = minirv
VFLAGS = IFU.v \
	 IDU.v \
	 EXU.v \
	 LSU.v \
	 WBU.v \
	 GPR.v \
	 minirv.v
CFLAGS = sim_main.cpp
DUMP = wave.fst

all: compile run

compile:
	verilator -Wall --cc --exe --build --trace-fst --top-module $(TOP) \
	$(VFLAGS) $(CFLAGS) --o V$(TOP)

run:
	./obj_dir/V$(TOP) --fst-trace $(DUMP)

wave:
	gtkwave $(DUMP) &

clean:
	rm -rf obj_dir $(DUMP) *~ *.log
	
