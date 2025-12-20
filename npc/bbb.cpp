#include "Vdouble_sw.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));
    
    // ========== 第一步：创建上下文 ==========
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    // ========== 第二步：用这个上下文启用跟踪 ==========
    contextp->traceEverOn(true);  // 注意：使用 contextp-> 而不是 Verilated::
    
    // ========== 第三步：创建设计实例（传入上下文） ==========
    Vdouble_sw* top = new Vdouble_sw{contextp};
    
    // ========== 第四步：创建波形跟踪器 ==========
    VerilatedFstC* tfp = new VerilatedFstC;
    
    // ========== 第五步：连接波形跟踪 ==========
    top->trace(tfp, 99);
    tfp->open("wave.fst");
    
    // ========== 第六步：初始化并记录时间0 ==========
    top->a = 0;
    top->b = 0;
    top->eval();
    tfp->dump(0);  // 必须记录时间0！
    
    vluint64_t sim_time = 1;
    const int MAX_CYCLES = 100;  // 必须有限制！
    
    // ========== 第七步：仿真循环 ==========
    while (sim_time <= MAX_CYCLES) {  // 使用循环次数限制
        int a = rand() & 1;
        int b = rand() & 1;
        
        top->a = a;
        top->b = b;
        top->eval();
        
        tfp->dump(sim_time);  // 记录波形
        printf("Time %3lu: a=%d, b=%d, f=%d", sim_time, a, b, top->f);
        
        assert(top->f == (a ^ b));
        printf(" ✓\n");
        
        sim_time++;
    }
    
    // ========== 第八步：清理 ==========
    tfp->close();
    delete tfp;
    delete top;
    delete contextp;
    
    printf("\n仿真完成！测试了 %d 个随机向量。\n", MAX_CYCLES);
    return 0;
}
