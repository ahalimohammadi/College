#include <stdio.h>
#include <conio.h>

int main(){
    char kalame[21];
    int count;
    char check = 'T';
    printf("kalameye morede nazar ra vared kon: ");
    scanf("%s", kalame);
    for(count = 0 ; kalame[count] ; count++);
    for(int x = 0 ; x < count / 2 ; x++){
        if (kalame[x] != kalame[count - 1 - x]){
            check = 'F';
            break;
        }
    }
    if (check == 'T')
        printf("kalame gharine ast.");
    else if (check == 'F')
        printf("kalame gharine nist.");
    return 0;
}