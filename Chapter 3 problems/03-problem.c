#include <stdio.h>

int main()
{
    float i;
    printf("The total income of an emplayee[In lakh] is \n");
    scanf("%f", &i);
    if (i > 10.0)
    {
        printf("You have to pay 30%% tax.");
    }
    else if (i >= 2.5 && i < 5.0)
    {
        printf("You have to pay 5%% tax.");
    }
    else if (i >= 5.0 && i < 10.0)
    {
        printf("You have to pay 20%% tax.");
    }
    else
    {
        printf("Don't worry you do not have to pay any tax");
    }
    return 0;
}
/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab
2.5 – 5.0L
5.0L - 10.0L
Above 10.0L
Tax
5%
20%
30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/