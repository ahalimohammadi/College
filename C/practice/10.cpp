#include <stdio.h>
#include <conio.h>

int main() {
	float r;
	float area, p;
	printf("Enter three radius :");
	scanf("%e", &r);
	area = (float)3.14 * r * r;
	p = (float)2 * 3.14 * r;
	printf("\narea = %6.4f, p = %6.4f", area, p);
	getch();
	return 0;
}