#include <stdio.h>

int main()
{
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    for (n; n > 0; --n)
    {
        printf("%d\n", n);
    }

    return 0;
}
/*
 Write a program to print ‘n’ natural numbers in reverse order.
 */