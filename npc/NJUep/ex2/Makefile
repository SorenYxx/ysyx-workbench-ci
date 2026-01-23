SIMULATOR = verilator
TOP = ep
VERILOG_SRC = decode24.v
CPP_SRC = sim_main_de24.cpp
DUMP = wave.fst

all: compile run

compile:
	verilator --cc --exe --build --trace-fst --top-module $(TOP) \
	          $(VERILOG_SRC) $(CPP_SRC) --o V$(TOP)

run:
	./obj_dir/V$(TOP) --fst-trace $(DUMP)

wave:
	gtkwave $(DUMP) &

clean:
	rm -rf obj_dir $(DUMP) *~ *.log
