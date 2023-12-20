#include <stdio.h>
#include <conio.h>
const float LOW = 0.05;
const float HIGH = 0.10;
const int NUM = 7;
float price(float, int);
void give_output(float, int, float);

int main() {
    float wholesale, retail;
    int times;
    char ans;
    do{
        printf("\nEnter wholesale, self time: ");
        scanf("%f%d", &wholesale, &times);
        retail = price(wholesale, times);
        give_output(wholesale, times, retail);
        printf("\nDo you want to continue?(y/n): ");
        ans = getche();
        if(ans != 'y')
            break;
    } while(1);
    return 0;
}

float price(float wholesale, int times) {
    if(times <= NUM) {
        return(wholesale + wholesale * LOW);
    }
    return(wholesale + HIGH * wholesale);
}

void give_output(float wholesale, int times, float retail) {
    printf("\nWholesale = %7.1f, times = %3d", wholesale, times);
    printf("\nRetail cost = %7.1f", retail);
}