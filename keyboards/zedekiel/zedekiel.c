#include "zedekiel.h"
#include "quantum.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	matrix_init_user();
	setPinOutput(MISO_PIN);
};

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)
	matrix_scan_user();
};