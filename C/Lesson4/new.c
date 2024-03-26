#include<stdio.h>

void re(char []);

int main(){
    int size = 0;
    char st[5];
    do {
        printf("Enter your character: ");
        scanf("%s", st[size]);
    } while(st[size++] != '.');
    size--;
    re(st);
}

void re(char st[]){
    int count = 0;
    for(int i = 0; st[i]; i++){
        count++;
    }
    printf("Num of your charachter = %d", count);
}