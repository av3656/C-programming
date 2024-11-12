#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value : ");
    scanf("%d", &n);
    for (i = 1; n >= i; ++i)
    {
        printf("%d\n", i);
    }

    return 0;
}