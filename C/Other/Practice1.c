#include <conio.h>
#include <stdio.h>

int main() {
    int x, y, n;
    printf("Please enter a number: ");
    scanf("%d", &x);
    y = x + 2;
    if(x == 1) {
        for(int i = 1; i <= y; i++) {
            printf("*");
            printf("\n");
        }
    } else {
        n = (x - 1) * 4;
        for(int i = 1; i <= y + n; i++) {
            printf("*");
            printf("\n");
        }
    }
    getch();
    return 0;
}