#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet:");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);
    if (ch > 96 && ch < 123)
    {
        printf("This character is lowercase.\n");
        // askii value is used in this question.
    }
    else
    {
        printf("This character is not lowercase.\n");
    }
    return 0;
}