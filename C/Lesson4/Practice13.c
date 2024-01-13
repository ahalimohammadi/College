#include <stdio.h>

float total, Average;
void result(float, float, float);

int main() {
    float entry1, entry2, entry3;
    printf("Please enter three float number: ");
    scanf("%f%f%f", &entry1, &entry2, &entry3);
    result(entry1, entry2, entry3);
    printf("Total = %g, Average = %g", total, Average);
    return 0;
}

void result(float entry1, float entry2, float entry3) {
    total = entry1 + entry2 + entry3;
    Average = total / 3;
}