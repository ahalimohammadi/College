#include <conio.h>
#include <stdio.h>

int main() {
    int x, y, i, k;
    while(k = 'y') {
        printf("\nPlease enter first number: ");
        scanf("%d", &x);
        printf("Please enter second number: ");
        scanf("%d", &y);
        for (i = 0; x >= y; i++) {
            x = x - y;
        }
        printf("m = %d\n", i);
        printf("x = %d", x);
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