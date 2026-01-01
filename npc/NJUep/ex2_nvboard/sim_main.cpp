#include <nvboard.h>
#include "Vep.h"
#include <stdio.h>
#include <unistd.h>

static Vep dut;
void nvboard_bind_all_pins(Vep* top);

int main(int argc, char **argv) {
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	dut.en = 1;

	while(1) {
		nvboard_update();
		dut.eval();

		printf("输入: %02x, 编码: %d, 七段码: %07b\n",
           dut.x, dut.y, dut.HEX0);
	}

	nvboard_quit();
	return 0;
}



