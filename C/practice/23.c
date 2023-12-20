#include <conio.h>
#include <stdio.h>

int main() {
    int i2, i5, i10, i20, i50, count = 0;
    unsigned long int sum;
    for(i2 = 0; i2 <= 50; i2++) {
        for(i5 = 0; i5 <= 20; i5++) {
            for(i10 = 0; i10 <= 10; i10++) {
                for(i20 = 0; i20 <= 5; i20++) {
                    for(i50 = 0; i50 <= 2; i50++) {
                        sum = i2 * 2 + i5 * 5 + i10 * 10 + i20 * 20 + i50 * 50;
                        if(sum == 100) {
                            printf("\n2Rials = %d, 5Rials = %d, 10Rials = %d", i2, i5, i10);
                            printf("20Rials = %d, 50Rials = %d", i20, i50);
                            count++;
                        }
                        sum = 0;
                    }
                }
            }
        }
    }
    printf("\nNumber of correct times: %d", count);
    getch();
    return 0;
}