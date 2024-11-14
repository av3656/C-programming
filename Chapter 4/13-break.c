#include <stdio.h>

int main()
{
    int a;
    printf("Enter : ");
    scanf("%d", &a);
    for (int j = 1; j <= a; j++)
    {
        if (j > 30 && j < 50)
        {
            break;
        }

        printf("%d\n", j * 2);
    }

    return 0;
}