#include <conio.h>
#include <stdio.h>

int main() {
    int x = 5;
    while (--x > 0) {
        printf("%3d", x);
    }
    getch();
    return 0;
}