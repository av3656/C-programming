#include <stdio.h>

int main()
{
    int i;
    printf("Enter :");
    scanf("%d", &i);

    do
    {
        printf("The value is %d\n", i);
        ++i;
    } while (i < 10);

    return 0;
}