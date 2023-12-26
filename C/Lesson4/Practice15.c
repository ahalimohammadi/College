#include <stdio.h>
#include <math.h>

void Eq(int, int, int);

int main() {
    int a, b, c;
    printf("Please enter a, b, c on the equation in phase 2: ");
    scanf("%d%d%d", &a, &b, &c);
    Eq(a, b, c);
    return 0;
}

void Eq(int a, int b, int c) {
    double delta, value, value1, value2;
    delta = b * b - 4 * a * c;
    if(delta > 0) {
        value1 = (-b + sqrt(delta)) / (2 * a);
        value2 = (-b - sqrt(delta)) / (2 * a);
        printf("It has two real and separate roots:(First = %g, Second = %g)", value1, value2);
    }else if(delta < 0) {
        printf("It's incorrect :(");
    }else {
        value = -b / (2 * a);
        printf("It has one separate roots = %g", value);
    }
}