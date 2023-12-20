#include <stdio.h>

void hasel(int);
int Vorodi;

int main() {
    printf("Please enter a integer number: ");
    scanf("%d", &Vorodi);
    hasel(Vorodi);
    return 0;
}

void hasel(int x) {
    printf("%d\n", x);
    if(x > 0) {
        x--;
        hasel(x);
    }
}