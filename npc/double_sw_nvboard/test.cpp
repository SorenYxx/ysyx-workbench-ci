#include <nvboard.h>
#include "Vdouble_sw.h"

void nvboard_bind_all_pins(Vdouble_sw* top) {
	nvboard_bind_pin( &top->a, 1, SW0);
	nvboard_bind_pin( &top->b, 1, SW1);
	nvboard_bind_pin( &top->f, 1, LD0);
}
