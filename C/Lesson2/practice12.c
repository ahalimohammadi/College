#include <conio.h>
#include <stdio.h>

int main() {
	int x, y, n;
	n = 3.156e7;
	printf("Please enter your age: ");
	scanf("%d", &x);
	y = x * n;
	printf("You lived seconds = %d\n", y);
	getch();
	return 0;
}