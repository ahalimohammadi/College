#include <conio.h>
#include <stdio.h>

int main() {
    long int fact = 1;
    int i, num;
    for (;;) {
        printf("Type a number:");
        scanf("%d", &num);
        fact = 1;
        for(i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial is: %ld\n", fact);
    }
    getch();
    return 0;
}