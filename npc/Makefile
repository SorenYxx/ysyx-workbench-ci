all:sim

sim:clean
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe --build -j 0 -Wall double_sw.cpp double_sw.v

run:
	obj_dir/Vdouble_sw

clean: 
	rm -rf obj_dir

include ../Makefile
