#include <stdio.h>

/* Fahrenheit and Celciuc temperature table */
int main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // lowest fahr t
	upper = 300; // highest fahr t
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9; // convertion F to C
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

