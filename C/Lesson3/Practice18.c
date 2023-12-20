#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, b, n;
    printf("Please enter a number: ");
    scanf("%f", &x);
    y = (int)x;
    b = x - y;
    n = (int)b * 100;
    printf("Your first number is = %g & your second number is = %g", y, n);
    getch();
    return 0;
}