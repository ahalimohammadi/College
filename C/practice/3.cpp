#include <stdio.h>

int main() {
	int x = 19.6;
	float y = 15.5;
	char ch = 'a';
	printf("\nx = %d, y = %f, ch = %c", x, y, ch);
	printf("\naddress of x is : %p", &x);
	int x1 = 15, y1 = 20;
	printf("\nx = %%%d\ty = %%%d", x1, y1);
	double d;
	d = 2e+0007;
	printf("\nThe Value Of d is :%e", d);
	printf("\nThe Value Of d is :%E", d);
	printf("\nThe Value Of d is :%g", d);
	return 0;
}