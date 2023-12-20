#include <stdio.h>
#include <conio.h>

int main() {
	int x, y, n;
	float ave;
	printf("Enter three integers :");
	scanf("%d%d%d", &x, &y, &n);
	ave = (float)(x + y + n) / 3;
	printf("\naverage = %10.4f", ave);
	getch();
	return 0;
}