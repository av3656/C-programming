#include <stdio.h>

int main()
{
    int a, year;
    printf("Enter the year:");
    scanf("%d", &year);
    a = year % 4;
    if (a == 0)
    {
        printf("This year is Leap year. The month of February of this year will be of 29 days.");
    }
    else
    {
        printf("This year is non Leap year. The month of February of this year will be of 28 days.");
    }
    return 0;
}