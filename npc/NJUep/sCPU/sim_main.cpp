#include "Vgyx_sCPU.h"
#include <nvboard.h>

static Vgyx_sCPU dut;
void nvboard_bind_all_pins(Vgyx_sCPU *top);

static void single_cycle0() {
    dut.clk = 0; dut.eval();
    dut.clk = 1; dut.eval();
    dut.clk = 0; dut.eval();
}

static void single_cycle1() {
    dut.rst = 0; dut.eval();
    dut.rst = 1; dut.eval();
    dut.rst = 0; dut.eval();
}

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();
    
    int btn0 = 0;
    int btn1 = 0;

    while(1) {
	nvboard_update();

	if (dut.clk == 1 && btn0 == 0) single_cycle0();        
	btn0 = dut.clk;

	if (dut.rst == 1 && btn1 == 0) single_cycle1();
	btn1 = dut.rst;
    }

    nvboard_quit;
    return 0;
}

