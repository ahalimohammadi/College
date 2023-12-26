#include <stdio.h>

void sum(int, int);
void zarb(int, int);
void tagsim(float, float);
int Sum1, Zarb1;

int main() {
    printf("Enter your number to give sum: ");
    int x, y, z, p;
    int resaulte;
    scanf("%d%d", &z, &p);
    sum(z, p);
    printf("\nEnter your number to give zarb: ");
    scanf("%d%d", &x, &y);
    zarb(x, y);
    tagsim(Sum1, Zarb1);
    return 0;
}

void sum (int z, int p){
    Sum1 = z + p;
    printf("Your sum is = %d", Sum1);
}

void zarb (int x, int y){
    Zarb1 = x * y;
    printf("your zarb is = %d", Zarb1);
}

void tagsim(float sum1, float zarb1) {
    float tagsimm = (float)zarb1 / sum1;
    printf("\nTagsim = %4.2f", tagsim);
}