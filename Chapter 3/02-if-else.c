#include <stdio.h>

int main()
{
    int a, b = 18, c = 21;
    printf("The Age of student is ");
    scanf("%d", &a);
    if (c > a > b)
    {
        printf("Student is eligible for the examination.");
    }
    if (c == a == b)
    {
        printf("Student is eligible for the examination.");
    }
    else
    {
        printf("Student is not eligible for the examination.");
    }
    return 0;
}