#include "Vdouble_sw.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int main(int argc, char** argv) {
    srand(time(NULL));

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    Vdouble_sw* top = new Vdouble_sw{contextp};

    VerilatedFstC* tfp = new VerilatedFstC;

    top->trace(tfp, 99);
    tfp->open("wave.fst");

    tfp->dump(0);

    vluint64_t sim_time = 1;
    const int MAX_CYCLES = 100;

    while (sim_time <= MAX_CYCLES) {
	int a = rand() & 1;
	int b = rand() & 1;

	top->a = a;
  	top->b = b;
 	top->eval();

        tfp->dump(sim_time);
  	printf("a = %d, b = %d, f = %d\n", a, b, top->f);

  	assert(top->f == (a ^ b));
        sim_time++;
    }
    tfp->close();
    delete tfp;
    delete top;
    delete contextp;
    return 0;
}	
