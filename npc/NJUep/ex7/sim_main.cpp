#include "Vep.h"
#include <nvboard.h>
#include <stdio.h>

static Vep dut;

void nvboard_bind_all_pins(Vep *top);

static void single_cycle() {
    dut.clk = 0; dut.eval();
    dut.clk = 1; dut.eval();
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    reset(10);

    while(1) {
	nvboard_update();
	single_cycle();
    }
}
