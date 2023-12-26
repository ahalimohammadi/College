#include <stdio.h>

int hasel(void);
int value, x = 1, n;
float Total = 0, Average;

int main() {
    printf("How many number do you want to enter: ");
    scanf("%d", &value);
    n = value;
    hasel();
    Average = Total / n;
    printf("Total = %4.2f, Average = %4.2f", Total, Average);
    return 0;
}

int hasel(void) {
    float num;
    printf("Please enter %d float number: ", x);
    scanf("%f", &num);
    x++;
    Total += num;
    value--;
    if(value > 0) {
        hasel();
    }
}