#include <stdio.h>

int main()
{
	char x, y;
	x = getchar();
	y = getchar();
	if ( (x = y) != 0) {
		printf("%c\n%c\n", x, y);
	}

	return 0;
}
