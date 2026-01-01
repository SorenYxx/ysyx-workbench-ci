#include <nvboard.h>
#include "Vdouble_sw.h"

static Vdouble_sw dut;

void nvboard_bind_all_pins(Vdouble_sw* top);

int main(int argc, char** argv) {
    nvboard_bind_all_pins(&dut);

    nvboard_init();

    while (1) {
	nvboard_update();
	dut.eval();
}

    nvboard_quit();
    return 0;
}
