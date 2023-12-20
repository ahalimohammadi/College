#include <conio.h>
#include <stdio.h>

int main() {
	int i, sum = 0, num, n = 5;
	float ave;
	for(i = 0;i < n;i++) {
		printf("Please enter number %d:", i + 1);
		scanf("%d", &num);
		sum += num;
	}
	ave = (float)sum / n;
	printf("\nThe average is: %4.2f", ave);
	getch();
	return 0;
}