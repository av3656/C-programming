/*This program is wrong according to the question i have checked it.*/
#include <stdio.h>

int main()
{
    /*
    i have written this program first which is wrong.....
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
     */
    float income, tax = 0;
    printf("Enter income of the person : \n");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("You do not have to pay any tax.\n");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = (income - 500000) * 0.2 + (250000 * 0.05);
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.2) + (income - 1000000) * 0.3;
    }
    printf("The total amount of tax you have to pay is %.2f", tax);
    return 0;
}
/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab  Tax
2.5 – 5.0L  5%
5.0L - 10.0L  20%
Above 10.0L  30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/