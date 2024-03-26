#include <stdio.h>

void ginput(int [], int);
void bubble(int [], int);
int bsearch(int [], int, int);

int main() {
    const int k = 5;
    int st[k], no;
    ginput(st, k);
    printf("\nEnter a student # to search: ");
    scanf("%d", &no);
    bubble(st, k);
    if(bsearch(st, k, no) == -1) {
        printf("\nNumber %d not exist in list ", no);
    } else {
        printf("\nNumber %d exist in list.", no);
    }
    return 0;
}

void ginput(int st[], int len) {
    for(int i = 0; i < len; i++) {
        printf("Enter student number %d: ", i + 1);
        scanf("%d", &st[i]);
    }
}

int bsearch(int st[], int len, int no) {
    int mid, low = 0, high = len - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(no < st[mid]) {
            high = mid - 1;
        } else if(no > st[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

void bubble(int st[], int len) {
    int i, j, item;
    for(i = len - 1; i > 0; i --) {
        for(j = 0; j < i; j++) {
            if(st[j] > st[i + 1]) {
                item = st[i] ;
                st[j] = st[j + 1];
                st[j + 1] = item;
            }
        }
    }
}