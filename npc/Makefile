VERILATOR = verilator
VERILATOR_FLAGS = --trace-fst -Wall --cc
CXX_FLAGS = -O2 

# 默认目标
all:sim

# 生成和编译
sim:clean
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) double_sw.v --exe bbb.cpp
	cd obj_dir && make -j4 -f Vdouble_sw.mk CXXFLAGS="$(CXX_FLAGS)" Vdouble_sw

# 运行仿真
run:
	cd obj_dir && ./Vdouble_sw

# 查看波形
wave:
	gtkwave wave.fst &

# 清理生成文件
clean: 
	rm -rf obj_dir
	rm -f wave.fst wave.vcd

include ../Makefile
