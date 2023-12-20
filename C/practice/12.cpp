#include <conio.h>
#include <stdio.h>

int main() {
	int x, y;
	printf("Enter two integers:");
	scanf("%d%d", &x, &y);
	printf("Before change: x = %d, y = %d", x, y);
	x += y;
	y = x - y;
	x -= y;
	printf("\nAfter change: x = %d, y = %d", x, y);
	getch();
	return 0;
}