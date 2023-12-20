#include <conio.h>
#include <stdio.h>

int main() {
    int i, j, m;
    printf("Please enter a number: ");
    scanf("%d", &m);
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}