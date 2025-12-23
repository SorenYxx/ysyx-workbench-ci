#include "Vdouble_sw.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <memory>

int main(int argc, char **argv) {
    srand(time(NULL));

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vdouble_sw *top = new Vdouble_sw{contextp.get()};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("obj_dir/t_trace_ena_cc/simx.vcd");

    top->a = 0;
    top->b = 0;
    top->eval();
    tfp->dump(contextp->time());

    const vluint64_t sim_time = 100;

    while (contextp->time() < sim_time && !contextp->gotFinish()) {
	int a = rand() & 1;
	int b = rand() & 1;
	top->a = a;
	top->b = b;

        contextp->timeInc(1);
        top->eval();
       
        tfp->dump(contextp->time());

	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a ^ b));
    }
    tfp->close();
    delete tfp;

    return 0;

}
