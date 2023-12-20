#include <conio.h>
#include <stdio.h>

int main() {
	char m;
	for(m = 'a';m <= 'z';m++) {
		printf("m = %c, code = %d\n", m, m);
	}
	getch();
	return 0;
}