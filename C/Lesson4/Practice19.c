#include <stdio.h>
// #include <math.h>

double power(double, int);

int main() {
    float a;
    int b;
    printf("Please enter two numbers to calculate power: ");
    scanf("%f%d", &a, &b);
    printf("Power of your entry number = %g", power(a, b));
    return 0;
}

double power(double x, int y) {
    double powerA = 1;
    for(int i = 1; i <= y; i++) {
        powerA *= x;
    }
    return powerA;
    // return pow(x, y);
}