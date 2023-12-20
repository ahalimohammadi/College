#include <conio.h>
#include <stdio.h>
void test(void);

int main() {
    register int i;
    for(i = 1; i <= 5; i++) {
        test();
    }
    return 0;
}

void test(void) {
    int x = 0;
    static int y = 0;
    printf("Auto x = %d, Static y = %d\n", x, y);
    x++;
    y++;
}