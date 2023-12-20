#include <conio.h>
#include <stdio.h>

int main() {
    int x, i;
    float m, num, avg;
    for(;;) {
        num = 0;
        printf("How many number do you want to enter:");
        scanf("%d", &x);
        for(i = 1; i <= x; i++) {
            printf("Please enter %d number:", i);
            scanf("%f", &m);
            num += m;
        }
        avg = num / x;
        printf("Total = %g, Average = %g\n", num, avg);
    }
    getch();
    return 0;
}