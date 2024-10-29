#include <stdio.h>
int main()
{
    // I write this code basically for understanding how to take input from the user.....
    int a;
    scanf("%d", &a);
    float b;
    scanf("%f", &b);
    char c;
    scanf("%c", &c);

    printf("The value you write and you wants to print on the screen is %d\n", a);
    printf("The value with decimals is %f\n", b);
    printf("The special Character which you write is %c\n", c);

    return 0;
}