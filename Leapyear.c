//Prgramme to check whether the given year is leap year or not
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the number of year: ");
    scanf("%d",&year);
    //using IF to check
    if(year % 4 == 0 && year % 400 == 0 || year % 100 != 0)
    //if the year is divisble by 4 and divisible by 400 or not divisible by 100 the year is leap year
    {
        printf("The given number of year is a Leap year");
    }
    else 
    {
        printf("The given number of year is not a Leap year");
    }

    return 0;
}