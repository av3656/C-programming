#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, year;
    printf("Enter the year:");
    scanf("%d", &year);
    a = year % 4;
    b = year % 100;
    c = year % 400;
    if (a == 0 && (b != 0 || c == 0))
    {
        printf("This year is Leap year. The month of February of this year will be of 29 days.");
    }
    else
    {
        printf("This year is non Leap year. The month of February of this year will be of 28 days.");
    }
    return 0;
}