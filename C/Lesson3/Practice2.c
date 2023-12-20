#include <conio.h>
#include <stdio.h>

int main() {
    int i, num, sum = 0;
    char k = 'y';
    while(k == 'y') {
        printf("\nPlease enter a number: ");
        scanf("%d", &num);
        for(i = 1; i < num; i++) {
            if((num % i) == 0) {
                sum += i;
            }
        }
        if(sum == num) {
            printf("\nYour number is perfect :)");
        } else {
            printf("\nYour number isn't perfect :(");
        }
        sum = 0;
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