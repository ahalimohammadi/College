#include <stdio.h>

int x = 0, y = 0, m, n, k;
void result(int);

int main() {
    int Vorodi;
    printf("How many Fibonacci numbers are shown? ");
    scanf("%d", &Vorodi);
    result(Vorodi);
    return 0;
}

void result(int Vorodi) {
    m = x + y;
    if(k == 1) {
        m--;
    }
    printf("%d ", m);
    n = x + m;
    k = n;
    x = y;
    y = m;
    if(y == 0) {
        y++;
    }
    Vorodi--;
    if(Vorodi > 0) {
        result(Vorodi);
    }
}