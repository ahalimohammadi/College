#include <stdio.h>

int main() {
    const int n = 5;
    float ave[n], amax = 0;
    int i, p;
    for(i = 0; i < n; i++) {
        printf("Enter an average: ");
        scanf("%f", &ave[i]);
    }
    amax = ave[0];
    p = 0;
    for(i = 1; i < n; i++) {
        if(ave[i] > amax) {
            amax = ave[i];
            p = i;
        }
    }
    printf("\nMax = %4.2f, Position = %d", amax, p+1);
    return 0;
}