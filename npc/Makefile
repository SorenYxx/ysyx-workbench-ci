all: sim

sim: clean
        $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe --build -j 0 -Wall ds.cpp double_sw.v

include ../Makefile
