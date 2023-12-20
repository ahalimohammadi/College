#include <stdio.h>

void hasel(float, float, float);
float total, Average;

int main() {
    float Vorodi1, Vorodi2, Vorodi3;
    printf("Please enter three float number: ");
    scanf("%f%f%f", &Vorodi1, &Vorodi2, &Vorodi3);
    hasel(Vorodi1, Vorodi2, Vorodi3);
    printf("Total = %4.2f, Average = %4.2f", total, Average);
    return 0;
}

void hasel(float Vorodi1, float Vorodi2, float Vorodi3) {
    total = Vorodi1 + Vorodi2 + Vorodi3;
    Average = total / 3;
}