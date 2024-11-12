#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value : ");
    scanf("%d", &a);
    for (b = 2; a >= b; b = 2 + b)
    {
        printf("%d\n", b);
    }

    return 0;
}