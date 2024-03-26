#include <stdio.h>
#include <conio.h>

int main() {
    char s1[81], s2[81], temp;
    int i, j;
    printf("Enter string <s1> : ");
    gets(s1);
    printf("Enter string <s2> : ");
    gets(s2);
    for(i = 0; s1[i] && s2[i]; i++) {
        temp = s1[i];
        s1[i] = s2[i];
        s2[i] = temp;
    }
    if(s1[i]) {
        j = i;
        while(s1[i])
            s2[i] = s1[i++];
            s2[i] = '10';
            s1[j] = '\0';
    } else if (s2[i]) {
        j = i;
        while(s2[i])
            s1[i] = s2[i++];
            s2[j] = '\0';
            s1[i] = '10';
    }
    printf("New content of s1 is: ");
    puts(s1);
    printf("New content of s2 is: ");
    puts(s2);
    return 0;
}