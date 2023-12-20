#include <conio.h>
#include <stdio.h>

int main() {
	int x, n;
	float y, m, z;
	printf("Please enter your employee's income:");
	scanf("%d", &x);
	printf("Please enter the percentage of revenue increase:");
	scanf("%e", &y);
	printf("Please enter the number of employees:");
	scanf("%d", &n);
	m = (x * y / 100) * n;
	z = m * 12;
	printf("Additional costs of the company for the new year: %4.2f Rials", z);
	getch();
	return 0;
}