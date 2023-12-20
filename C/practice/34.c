#include <stdio.h>
#include <conio.h>
int product(int x, int y);

int main() {
    int x, y;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &x, &y);
    printf("Thier product is: %d", product(x, y));
    return 0;
}

int product(int x, int y) {
    if(y == 1) {
        return x;
    }
    return(x + product(x, y - 1));
}