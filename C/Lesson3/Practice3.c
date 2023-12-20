#include <conio.h>
#include <stdio.h>

int main() {
    int i, j, x;
    printf("Please enter a number: ");
    scanf("%d", &x);
    for(i = 1; i <= x; i++) {
        for(j = 1; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}