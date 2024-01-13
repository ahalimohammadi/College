#include <stdio.h>

void findt(float arr[], int k);

int main() {
    const int k = 10;
    float arr[k];
    int i;
    printf("Enter %d mead and press Enter:\n", k);
    for(i = 0; i < k; i++) {
        scanf("%f", &arr[i]) ;
    }
    findt(arr, k);
    return 0;
}

void findt(float arr[], int k) {
    int max_count = -1;
    float max_value;
    int i, j, current_count = 0;
    float current_value;
    for(i = 0; i < k; i++) {
        current_value = arr[i];
        for(j = 0; j < k; j++) {
            if(arr[j] == current_value) {
                current_count++;
                if(current_count > max_count) {
                    max_count = current_count;
                    max_value = current_value;
                }
            }
        }
    }
    printf("\nMaximum iteration of ave: ");
    printf("%4.2f is %d", max_value, max_count);
}