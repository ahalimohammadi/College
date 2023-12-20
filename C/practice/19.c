#include <conio.h>
#include <stdio.h>

int main() {
	char ch;
	int count;
	printf("Enter a statement with . in end:\n");
	for(count = 0;(ch = getche()) != '.';count++);
	printf("\nLength of statement is:%d", count);
	getch();
	return 0;
}