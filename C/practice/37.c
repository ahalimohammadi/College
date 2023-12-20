#include <stdio.h>

float calculate(float balance, float rate, int mon) {
    int i;
    float ben, sben = 0;
    for(i = 1; i <= mon; i++) {
        ben = balance * rate / 100;
        balance += ben;
        sben += ben;
    }
    return sben;
}

int main() {
    int mon;
    float balance, rate, sben;
    printf("Enter balance, rate, mon: ");
    scanf("%f%f%d", &balance, &rate, &mon);
    sben = calculate(balance, rate, mon);
    printf("\nBenefit = %7.1f, balance = %7.1f", sben, balance);
    printf("\nNew balance is: %7.1f", balance + sben);
    return 0;
}