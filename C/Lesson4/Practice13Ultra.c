#include <stdio.h>

void hasel(void);
int value, x;
float Total = 0, Average;

int main() {
    printf("How many number do you want to enter: ");
    scanf("%d", &value);
    x = value;
    hasel();
    Average = Total / x;
    printf("Total = %4.2f, Average = %4.2f", Total, Average);
    return 0;
}

void hasel(void) {
    int x;
    float num;
    printf("Please enter a float number: ");
    scanf("%f", &num);
    Total += num;
    value--;
    if(value > 0) {
        hasel();
    }
}