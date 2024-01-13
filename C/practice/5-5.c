#include <stdio.h>

void ginput(int [], int);
void bubble(int [], int);
void goutput(int [], int);

int main() {
    const int k = 7;
    int temp[7];
    ginput(temp, k);
    bubble(temp, k);
    printf("The sorted data are:\n") ;
    goutput(temp, k);
    return 0;
}

void ginput(int temp[], int len) {
    for(int i = 0; i < len; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &temp[i]);
    }
}

void bubble(int temp[], int len) {
    for(int i = len - 1; i > 0; i--) {
        for(int j = 0; j < i ; j++) {
            if(temp[j] > temp[j + 1]) {
                int item = temp[i];
                temp[i] = temp[j + 1];
                temp[j + 1] = item;
            }
        }
    }
}

void goutput(int temp[], int len) {
    for(int i = 0 ; i < len; i++) {
        printf("%d\n", temp[i]);
    }
}