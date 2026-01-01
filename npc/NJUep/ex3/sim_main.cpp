#include "Vep.h"
#include <nvboard.h>

static Vep dut;
void nvboard_bind_all_pins(Vep *top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
	nvboard_update();
	dut.eval();

    }
    nvboard_quit();
    return 0;
    
}
