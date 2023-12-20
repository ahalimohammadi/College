#include <conio.h>
#include <stdio.h>

int main() {
    int x, y, i, j, m, fact, n = 0;
    printf("Please enter a number: ");
    scanf("%d", &x);
    y = x % 10;
    for(i = 1; y % 10 != 0 ; i++) {
        fact = 1;
        m = x % 10;
        y = (int)(x / 10);
        x = y;
        for(j = 1; j <= m ; j++) {
            fact *= j;
        }
        n += fact;
    }
    printf("Factorial sum of figures = %d", n);
    getch();
    return 0;
}