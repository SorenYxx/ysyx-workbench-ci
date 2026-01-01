#include "Vep.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <stdlib.h>
#include <iostream>

Vep *top;
VerilatedFstC* tfp;
vluint64_t main_time = 0;

double sc_time_stamp() {
	return main_time;
}

void sim_init(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);

	top = new Vep;	
	tfp = new VerilatedFstC;

	top->trace(tfp, 99);
	tfp->open("wave.fst");
}

void step_and_dump_wave() {
	top->eval();
	tfp->dump(main_time);
	main_time++;
}

void sim_exit() {
	tfp->close();
	delete top;
	delete tfp;
	exit(0);
}

int main(int argc, char **argv) {
  sim_init(argc, argv);

  top->en=0b0; top->x =0b0000; step_and_dump_wave();
               top->x =0b0001; step_and_dump_wave();
               top->x =0b0010; step_and_dump_wave();
               top->x =0b0100; step_and_dump_wave();
               top->x =0b1000; step_and_dump_wave();
  top->en=0b1; top->x =0b0000; step_and_dump_wave();
               top->x =0b0001; step_and_dump_wave();
               top->x =0b0010; step_and_dump_wave();
               top->x =0b0100; step_and_dump_wave();
               top->x =0b1000; step_and_dump_wave();
  sim_exit();
  return 0;
}
