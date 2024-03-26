#include <stdio.h>
#include <conio.h>

void replace(char [], char, char);

int main() {
    char string[50];
    char source_letter, target_letter;
    int i;
    printf("\nNenter the string: ");
    gets(string);
    printf("Enter source character: ");
    source_letter = getche();
    printf("\nNenter target character: ");
    target_letter = getche();
    replace(string, source_letter, target_letter);
    printf("\nThe result string is: ");
    puts(string);
    return 0;
}

void replace(char string[], char source_letter, char target_letter) {
    if(source_letter != target_letter) {
        for(int i = 0; string[i]; i++) {
            if(string[i] == source_letter) {
                string[i] = target_letter;
            }
        }
    }
}