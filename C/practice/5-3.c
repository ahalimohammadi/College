#include <stdio.h>
#include <conio.h>

int main() {
    int x[5], y[5], i, j;
    for(i = 0; i < 5 ; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    printf("Number in inverse:\n");
    for(i = 4; i >= 0; i--) {
        y[j] = x[i];
        printf("%d\n", y[j]);
    }
    return 0;
}