#include "Vdouble_sw.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <nvboard.h>

int main(int argc, char** argv) {
    srand(time(NULL));
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    contextp->traceEverOn(true);  // 注意：使用 contextp-> 而不是 Verilated::
    
    Vdouble_sw* top = new Vdouble_sw{contextp};
    
    VerilatedFstC* tfp = new VerilatedFstC;
    
    top->trace(tfp, 99);
    tfp->open("wave.fst");

    nboard_init();
    nvboard_bind_all_pins(top);
    
    top->a = 0;
    top->b = 0;
    top->eval();
    tfp->dump(0);  // 必须记录时间0！
    
    vluint64_t sim_time = 1;
    const int MAX_CYCLES = 100;  // 必须有限制！
    
    while (sim_time <= MAX_CYCLES) {  // 使用循环次数限制
        int a = rand() & 1;
        int b = rand() & 1;
        
        nboard_update_input(top);

        top->a = a;
        top->b = b;
        top->eval();
        
        tfp->dump(sim_time);  // 记录波形
        printf("Time %3lu: a=%d, b=%d, f=%d", sim_time, a, b, top->f);
        
        assert(top->f == (a ^ b));
        printf(" ✓\n");
        
        sim_time++;

	nboard_update_output(top);
	nboard_delay(1);
    }
    
    tfp->close();
    nboard_quit();
    delete tfp;
    delete top;
    delete contextp;
    
    return 0;
}
