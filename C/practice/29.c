#include <stdio.h>
#include <conio.h>
char tocapital(char);

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getche();
    printf("\nResult is: %c", tocapital(ch));
    return 0;
}

char tocapital(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        ch -= 32;
    }
    return ch;
}