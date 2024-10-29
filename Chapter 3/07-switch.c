#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    switch (a + b)
    {
    case 1:
        printf("The value of a+b is 1.\n");
        break;
        //break is used to break the switch function otherwise it will print all the cases.
    case 2:
        printf("The value of a+b is 2.\n");
        break;
    case 3:
        printf("The value of a+b is 3.\n");
        break;
    case 4:
        printf("The value of a+b is 4.\n");
        break;
    case 5:
        printf("The value of a+b is 5.\n");
        break;

    default:
        printf("The value does not lies between 0 to 6");
        break;
    }
    return 0;
}