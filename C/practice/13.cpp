#include <conio.h>
#include <stdio.h>

int main() {
	char ch;
	printf("Enter a char:");
	ch = getche();
	printf("\nch = %c, ch = %d", ch, ch);
	getch();
	return 0;
}