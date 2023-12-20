#include <stdio.h>
#include <conio.h>
void findmax(int, int, int);

int main() {
    int x, y, m;
    printf("Enter three integer numbers:");
    scanf("%d%d%d", &x, &y, &m);
    findmax(x, y, m);
    return 0;
}

void findmax(int p1, int p2, int p3) {
    int maxp;
    maxp = (p1 > p2) ? p1 : p2;
    maxp = (p3 > maxp) ? p3 : maxp;
    printf("maximum = %d", maxp);
}