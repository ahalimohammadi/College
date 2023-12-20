#include <stdio.h>
#include <conio.h>

int main() {
	int x, y, area, p;
	printf("Enter length and width :");
	scanf("%d%d", &x, &y);
	area = x * y;
	p = (x + y) * 2;
	printf("Area = %d, p = %d", area, p);
	getch();
	return 0;
}