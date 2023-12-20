#include <conio.h>
#include <stdio.h>

int main() {
    int x, n;
    printf("Please enter a number: ");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < x - i ; j++) {
            printf(" ");
        }
        for(int y = 1; y <= i; y++) {
            printf("%d", y);
            if(y == i) {
                for(n = y - 1; n >= 1 ; n--) {
                    printf("%d", n);
                }
            }
        }
        printf("\n");
    }
    for(int i = x - 1; i >= 1; i--) {
        for(int j = 1; j <= x - i; j++) {
            printf(" ");
        }
        for(int y = 1; y <= i; y++) {
            printf("%d", y);
            if(y == i) {
                for(n = y - 1; n >= 1 ; n--) {
                    printf("%d", n);
                }
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}