#include <conio.h>
#include <stdio.h>

int main() {
    int first, second, difference, years, months, days, hours, minutes, seconds;
    printf("Please enter your year of birth: ");
    scanf("%d", &first);
    printf("What year are we in: ");
    scanf("%d", &second);
    difference = second - first;
    years = difference;
    months = years * 12;
    days = months * 30;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    if(difference << 0) {
        printf("Your entered number is incorrect :(");
    } else{
        printf("You have lived %d years :)\n", years);
        printf("You have lived %d months :)\n", months);
        printf("You have lived %d days :)\n", days);
        printf("You have lived %d hours :)\n", hours);
        printf("You have lived %d minutes :)\n", minutes);
        printf("You have lived %d seconds :)\n", seconds);
    }
    getch();
    return 0;
}