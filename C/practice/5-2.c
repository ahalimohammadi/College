#include <stdio.h>
#include <conio.h>

int main() {
    const int n = 10;
    int arr[n], i, c1 = 0, c2 = 0;
    printf("\nEnter %d numbers and press ENTER:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Negavives are: ");
    for(i = 0 ; i < n ; i++) {
        if(arr[i] < 0) {
            printf("%d, ", arr[i]);
            c1++;
        }
    }
    printf("\nPositives are: ");
    for(i = 0 ; i < n ; i++) {
        if(arr[i] > 0) {
            printf("%d, ", arr[i]);
            c2++;
        }
    }
    printf("\nNumber of negative = %d", c1);
    printf("\nNumber of positive = %d", c2);
    return 0;
}