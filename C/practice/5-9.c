#include <stdio.h>

void minput(int [][2], int);
void mcal(int mat[][2], int);

int main() {
    const int r = 3, c = 2;
    int mat[r][c];
    minput(mat, r);
    mcal(mat, r);
    return 0;
}

void minput(int mat[][2], int r) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter mat[%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mcal(int mat[][2], int r) {
    int i, j, rmax;
    printf(" ROW \t\tMAX");
    printf("\n------------------");
    for(i = 0; i < r; i ++) {
        rmax = mat[i][0];
        for(j = 1; j < 2; j++) {
            if(mat[i][j] > rmax) {
                rmax = mat[i][j];
                printf("\n %d\t\t %d", i + 1, rmax);
            }
        }
    }
}