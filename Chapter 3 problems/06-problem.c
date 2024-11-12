#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 1st number :\n");
    scanf("%d", &a);
    printf("Enter 2nd number :\n");
    scanf("%d", &b);
    printf("Enter 3rd number :\n");
    scanf("%d", &c);
    printf("Enter 4th number :\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("1st number is the largest number %d.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("2nd number is the largest number %d.", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("3rd number is the largest number %d.", c);
    }
    else
    {
        printf("4th number is the largest number %d.", d);
    }

    return 0;
}