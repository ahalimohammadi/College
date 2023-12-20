#include <conio.h>
#include <stdio.h>

int main() {
	float i;
	for(i = 0.5;i <= 3.5;i += 0.5) {
		printf("i = %4.2f\n", i);
	}
	getch();
	return 0;
}