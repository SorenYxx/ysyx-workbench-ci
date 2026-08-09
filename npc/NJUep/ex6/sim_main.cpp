#include "Vep.h"
#include <nvboard.h>
#include <stdio.h>
#include <unistd.h>

static Vep dut;

void nvboard_bind_all_pins(Vep *top);

static void single_cycle() {
    dut.o = 0; dut.eval();
    dut.o = 1; dut.eval();
}

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    int btn = 0;

    while(1) {
	nvboard_update();
 
	if (dut.o == 1 && btn == 0) {
	    single_cycle();

            printf("b: 0x%02X (%d)\n", dut.b, dut.b);
        }

	btn = dut.o;
    }

    nvboard_quit();
    return 0;
}
