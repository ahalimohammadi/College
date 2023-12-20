#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float x;
    printf("\nPlease enter a number: ");
    scanf("%f", &x);
    int sahih = (int) x;
    float ashar = x - sahih;
    int tmp = 1;
    int nS = 0,nA = 0, rev;
    while (tmp != 0){
        tmp = sahih % 10;
        if (tmp == 0 ){
            break;
        }
        printf("%d", tmp);
        sahih /= 10;
        nS++;
    }
    printf(".");
    while(tmp!=0){
        ashar *= 10;
        tmp = (int)ashar%10;
        printf("%d", tmp);
        nA++;
    }

    return 0;
}