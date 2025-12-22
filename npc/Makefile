TOPNAME = double_sw
NXDC_FILE = top.nxdc

# 默认目标
all:sim

# 生成和编译
sim:clean
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(NXDC_FILE)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(NXDC_FILE) auto_bind.cpp auto_bind.v
	verilator --trace-fst -Wall --cc \
                  -I$(NVBOARD_HOME)/include \
                  --top-module $(TOPNAME) \
                  double_sw.v auto_bind.v \
                  --exe bbb.cpp \
                  -CFLAGS "-I$(NVBOARD_HOME)/include" \
		  -LDFLAGS "-L$(NVBOARD_HOME)/build -lnvboard -lSDL2 -lpthread" \
		  --build

# 运行仿真
run:
	./obj_dir/V$(TOPNAME)

# 查看波形
wave:
	gtkwave wave.fst &

# 清理生成文件
clean: 
	rm -rf obj_dir auto_bind.* wave.fst
	rm -f wave.fst wave.vcd

.PHONY: all sim run wave clean

include ../Makefile
