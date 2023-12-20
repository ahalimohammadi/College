#include <stdio.h>

int x = 0, y = 0, m, n, k;
void hasel(int);

int main() {
    int Vorodi;
    printf("How many Fibonacci numbers are shown? ");
    scanf("%d", &Vorodi);
    hasel(Vorodi);
    return 0;
}

void hasel(int Vorodi) {
    m = x + y;
    if(k == 1) {
        m--;
    }
    printf("%d\n", m);
    n = x + m;
    k = n;
    x = y;
    y = m;
    if(y == 0) {
        y++;
    }
    Vorodi--;
    if(Vorodi > 0) {
        hasel(Vorodi);
    }
}