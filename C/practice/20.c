#include <conio.h>
#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 1000; i++) {
        for (j = 1; j <= 20; j++) {
            printf("     %5d", i * j);
        }
        printf("\n");
    }
    getch();
    return 0;
}