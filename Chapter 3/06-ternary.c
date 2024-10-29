#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    a > b ? printf("First number is greater\n") : printf("Second number is greater\n");
    return 0;
}