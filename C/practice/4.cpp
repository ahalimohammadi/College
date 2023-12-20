#include <conio.h>
#include <stdio.h>

int main() {
	int m, x = 5, y = 10;
	m = x + y;
//	gotoxy(20, 10);
	printf("x = %d, y= %d, sum = %d", x, y, m);
	getch();
	return 0;
}