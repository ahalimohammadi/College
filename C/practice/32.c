#include <conio.h>
#include <stdio.h>
int k, sq, sum;
void input(void);
void square(void);

int main() {
    int j, i = 5;
    printf("Enter Five Number: ");
    for(j = 0; j < i; j++) {
        input();
    }
    printf("\nSum of square is: %d", sum);
    return 0;
}

void input(void) {
    scanf("%d", &k);
    square();
    sum += sq;
}

void square(void) {
    sq = k * k;
}