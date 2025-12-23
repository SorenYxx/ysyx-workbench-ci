VERILATOR_FLAGS = --trace -Wall --cc
CXXFLAGS = -O2

all: sim

sim: clean
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#verilator --cc --exe --build -j 0 -Wall double_sw.cpp double_sw.v
	verilator $(VERILATOR_FLAGS) double_sw.v --exe double_sw.cpp
	cd obj_dir && make -j4 -f Vdouble_sw.mk CXXFLAGS="$(CXXFLAGS)" Vdouble_sw
	
run:
	#obj_dir/Vdouble_sw
	cd obj_dir && ./Vdouble_sw

wave:
	gtkwave wave.vcd &

clean: 
	rm -rf obj_dir \
        rm -f wave.fst wave.vcd

include ../Makefile
