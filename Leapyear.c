//Programme to check whether the entered year is leap year or not.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year or not
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
//if the year is divisble by 4 and then checking if it is divisible by 100 if its is then it will check whether it is divisible by 400 also.
                printf("%d is a leap year.\n", year);
            else
                printf("%d is not a leap year.\n", year);
        } //this if bracket was for 100 divisibility conditon.
        else
            printf("%d is a leap year.\n", year);
    } else
        printf("%d is not a leap year.\n", year);

    return 0;
}
