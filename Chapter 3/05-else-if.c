#include <stdio.h>

int main()
{
    int a;
    printf("The age of the candidate according to Aadhar card is ");
    scanf("%d", &a);
    //You cannot use more than one retational operator in C language.
    if (a > 60)
    {
        printf("You are eligible for driving licence but don't drive.(Are o chacha jara sambhal ke)");
    }
    else if (a > 40)
    {
        printf("You are eligible for driving licence but be careful while driving.");
    }
    else if (a > 17)
    {
        printf("You are eligible for driving licence if you can drive. It's your best age of driving.");
    }
    else
    {
        printf("You are not eligible for driving licence.(Bachhe ghar me jaake chup chap GTA khelo)");
    }
    return 0;
}