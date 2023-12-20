#include <stdio.h>
#include <conio.h>
float area(float);

int main() {
    float r, s;
    printf("Enter the radius: ");
    scanf("%f", &r);
    s = area(r);
    printf("area = %4.2f", s);
    return 0;
}

float area(float r) {
    float s;
    s = r * r * 3.14;
    return s;
}