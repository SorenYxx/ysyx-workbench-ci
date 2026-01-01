#include "Vep.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// 全局变量
Vep* top;
VerilatedFstC* tfp;
vluint64_t main_time = 0;

// 仿真时间步进
double sc_time_stamp() {
    return main_time;
}

// 初始化仿真
void sim_init(int argc, char** argv) {
    // 初始化Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // 创建顶层模块实例
    top = new Vep;
    
    // 创建波形跟踪器
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);  // 跟踪99层层次结构
    tfp->open("wave.fst");  // 输出FST格式波形文件
}

// 步进并转储波形
void step_and_dump_wave() {
    top->eval();
    tfp->dump(main_time);
    main_time++;
    
    // 打印当前状态
    printf("time = %lu, en = %d, x = %d, y = %d\n", 
           main_time, top->en, top->x, top->y);
}

// 结束仿真
void sim_exit() {
    tfp->close();
    delete top;
    delete tfp;
    exit(0);
}

int main(int argc, char** argv) {
    sim_init(argc, argv);
    
    printf("=== 2-4 Decoder Simulation ===\n");
    
    // 测试使能端为0的情况
    top->en = 0b0;
    top->x = 0b00; step_and_dump_wave();
    top->x = 0b01; step_and_dump_wave();
    top->x = 0b10; step_and_dump_wave();
    top->x = 0b11; step_and_dump_wave();
    
    // 测试使能端为1的情况
    top->en = 0b1;
    top->x = 0b00; step_and_dump_wave();
    top->x = 0b01; step_and_dump_wave();
    top->x = 0b10; step_and_dump_wave();
    top->x = 0b11; step_and_dump_wave();
    
    // 额外的测试：使能端切换
    top->en = 0b0; step_and_dump_wave();
    top->en = 0b1; step_and_dump_wave();
    
    sim_exit();
    return 0;
}
