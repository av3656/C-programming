#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Write the value of 1st number (a) \n");
    scanf("%d", &a);
    printf("Write the value of 2nd number (b) \n");
    scanf("%d", &b);
    printf("Write the value of 3rd number (c) \n");
    scanf("%d", &c);
    printf("The value of a AND b is %d.\n", a && b);
    printf("The value of a OR b is %d.\n", a || b);
    printf("The value of a NOT is %d and b NOT is %d.\n", !a, !b);
    if ((a && b) && c)
    // it will print only if value (in this bracket) is non zero.
    // because c language takes 0 as false statement.
    {
        printf("The value of this conditional statement is 1\n");
    }
    // Both statement are same as writing.....
    if (a)
    {
        if (b)
        {
            if (c)
            {
                printf("This will print only if value of a , b and c is 1.\n");
            }
        }
    }
    return 0;
}