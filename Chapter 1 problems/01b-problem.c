#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Length\n", a);
    scanf("%d", &a);
    printf("Enter Breadth\n", b);
    scanf("%d", &b);
    c = a * b;
    printf("Area Of rectangle is=%d", c);

    return 0;
}