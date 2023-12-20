#include <stdio.h>
#include <conio.h>
int prime(int);

int main() {
    int num;
    char ans;
    while(1) {
        printf("\nEnter a number: ") ;
        scanf("%d", &num);
        if(prime(num)) {
            printf("Number %d is prime.", num);
        } else {
            printf("Number %d is not prime.", num);
        }
        printf("\nDo you want to continue?(y/n):");
        ans = getche();
        if(ans != 'y') {
            break;
        }
    }
    return 0;
}

int prime(int num) {
    int i, temp = 1;
    for(i = 2; (i <= num / 2) && temp ; i++) {
        if(num % i == 0) {
            temp = 0;
        }
    }
    return temp;
}