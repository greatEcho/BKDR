#include <stdio.h>

// F to C Table with float arithmetic
int main() {
	float fahr, celsius;
	int lower, step, upper;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0 / 9.0 * (fahr - 32.0);
		printf("%1.0f %2.3f\n", fahr, celsius);
		printf("\tPadding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
		printf("\tPadding:\t%05.2f %.2f %3.2f\n", 1.5, 1.5, 1.5);
		fahr = fahr + step;
	}

	return 0;
}
	
