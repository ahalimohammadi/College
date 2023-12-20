#include <conio.h>
#include <stdio.h>

int main() {
    int x = 1, y = 1, m, n;
    printf("How many Fibonacci numbers are shown?");
    scanf("%d", &n);
    printf("\nFibonachi:\n%d\n%d\n", x, y);
    for(int i = 1; i <= n - 2; i++) {
        m = x + y;
        printf("%d\n", m);
        x = y;
        y = m;
    }
    getch();
    return 0;
}