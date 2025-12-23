#include "Vdouble_sw.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    VerilatedContext *contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vdouble_sw *top = new Vdouble_sw{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    topp->trace(tfp,99);
    tfp->open("obj_dir/t_trace_ena_cc/simx.vcd");

    while (contextp->time() < sim_time && !contextp->gotFinish()) {
	contextp->timeInc(1);
	topp->eval();
	tfp->dump(contextp->time());

	int a = rand() & 1;
	int b = rand() & 1;
	top->a = a;
	top->b = b;
	top->eval();
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a ^ b));
    }
    tfp->close();
    delete top;
    delete contextp;

    return 0;

}
