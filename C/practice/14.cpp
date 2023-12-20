#include <conio.h>
#include <stdio.h>

int main() {
	char ch;
	printf("Eter a character:");
	ch = getchar();
	printf("You typed the character:");
	putch(ch);
	getch();
	return 0;
}