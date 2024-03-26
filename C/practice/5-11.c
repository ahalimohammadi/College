#include <stdio.h>

int findmin(int [], int);

int main() {
    int list[20], num, size = 0;
    do {
        printf("Type list[%d] : ", size);
        scanf("%d", &list[size]);
    } while(list[size++] != 0);
    size--;
    num = findmin(list, size);
    printf("\nMinimum is: %d", num);
    return 0;
}

int findmin(int arr[], int size) {
    int i, min1;
    min1 = arr[0];
    for(i = 0 ; i < size; i++) {
        if(arr[i] < min1) {
            min1 = arr[i];
        }
    }
    return (min1);
}