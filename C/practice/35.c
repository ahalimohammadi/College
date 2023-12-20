#include <stdio.h>
#include <conio.h>
void write_v(int);

int main() {
    int x;
    printf("Enter an integer number: ");
    scanf("%d", &x);
    write_v(x);
    return 0;
}

void write_v(int x) {
    if(x < 10) {
        printf("%d\n", x);
    }else {
        write_v(x / 10);
        printf("%d\n", x % 10);
    }
}