#include <stdio.h>
#include <conio.h>
void f1(int, int);

int main() {
    int x, y;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &x, &y);
    printf("You entered: x = %d, y = %d", x, y);
    f1(x, y);
    printf("\nAfter return from f1: x = %d, y = %d", x, y);
    return 0;
}

void f1(int x, int y) {
    printf("\nf1 recieves: x = %d, y = %d", x, y);
    x++;
    y++;
    printf("\nNew values in f1: x = %d, y = %d", x, y);
}