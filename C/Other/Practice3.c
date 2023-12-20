#include <conio.h>
#include <stdio.h>

int main() {
    int rows, i, j, k;
    printf("Enter rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        for(j = 1; j <= rows - k + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}