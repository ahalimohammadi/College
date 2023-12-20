#include <conio.h>
#include <stdio.h>

int main() {
	int x;
	float y;
	printf("Please enter a number:");
	scanf("%d", &x);
	y = (float)1 / ((x * x) + x + 3);
	printf("Answer the phrase = %4.10f", y);
	getch();
	return 0;
}