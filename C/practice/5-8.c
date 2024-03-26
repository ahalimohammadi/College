#include <stdio.h>

int main() {
    int table[10][10], i, j;
    for(i = 0; i < 10; i++) {                                                        
        for(j = 0; j < 10; j++) {
            printf("%4d", table[i][j] = (i + 1) * (j + 1));
        }
        printf("\n");
    }
    return 0;
}