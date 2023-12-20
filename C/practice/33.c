#include <stdio.h>
#include <conio.h>
unsigned long fact(int);

int main() {
    int m;
    printf("Enter a positive integer number: ");
    scanf("%d", &m);
    printf("Number = %d, fact = %ld", m, fact(m));
    return 0;
}

unsigned long fact(int x) {
    if(x != 0) {
        return(x * fact(x - 1));
    }
    return 1;
}