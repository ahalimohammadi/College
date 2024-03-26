#include <conio.h>
#include <stdio.h>

int main(){
  int i, j, n;
    printf("Please enter a number: ");
    scanf("%d", &n);
  for(i = 0; i < n; i++) {
    for(j = 1; j <= n-i; j++)
      printf(" ");
    for(j = 1 ; j <= ((i * 2) + 1) ; j++)
      printf("*");
    printf("\n");
  }
  getch();
  return 0;
}