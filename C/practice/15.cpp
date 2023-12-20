#include <conio.h>
#include <stdio.h>

int main() {
	float x, y;
	printf("Please enter farenheite:");
	scanf("%e", &x);
	y = (x - 32) * ((float)5 / 9);
	printf("Celsius = %4.2f", y);
	getch();
	return 0;
}