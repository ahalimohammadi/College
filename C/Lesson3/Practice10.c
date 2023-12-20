#include <conio.h>
#include <stdio.h>

int main() {
    int x, i, j;
    float y = 0, m;
    printf("Please enter a number: ");
    scanf("%d", &x);
    for(i = 1; i <= x ; i++) {
        float fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        m = 1 / fact;
        y += m;
    }
    printf("Total = %g", y);
    getch();
    return 0;
}