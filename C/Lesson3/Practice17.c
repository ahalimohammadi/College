#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
    int j = 0;
    float x, y = 1, m, sum = 0; 
    char k = 'y';
    while(k == 'y') {
        printf("\nPlease enter a number: ");
        scanf("%g", &x);
        while(x >= 10) {
            x = x / 10;
            if(x < 10) {
                break;
            }
        }
        while(m != 0) {
            y = x;
            x = floor(x);
            m = y - x;
            sum = sum + (x * pow(10, j));
            // printf("x = %g\ny = %g\nm = %g\nsum = %g\n", x, y, m, sum);
            x = m * 10;
            j++;
            // printf("x = %g\n", x);
        }
        printf("your number is = %g", sum);
        printf("\nPlease enter (y) to continue and (n) to exit: ");
        k = getche();
        if (k == 'y') {
            continue;
        } else if (k == 'n') {
            break;
        } else {
            printf("\nPlease enter the correct amount (y/n) ");
            k = getche();
        }
    }
    return 0;
}