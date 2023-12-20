#include <stdio.h>

int main() {
	int x, y, m;
	x = 12;
	y = 142;
	m = 1582;
	x = sizeof y;
	m = sizeof (float);
	printf("x = %4.2f, y = %4.2f, m = %4.2f", x, y, m);
}