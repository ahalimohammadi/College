#include <stdio.h>

int entry;
void result(int);

int main() {
    printf("Please enter a integer number: ");
    scanf("%d", &entry);
    result(entry);
    return 0;
}

void result(int x) {
    printf("%d\n", x);
    if(x > 0) {
        x--;
        result(x);
    }
}