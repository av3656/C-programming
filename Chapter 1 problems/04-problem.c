#include <stdio.h>
int main()
{
    float p, r, t, x, si; // Al last i use si to calculate the simple interest.
    printf("The principle amount is \n");
    scanf("%f", &p);
    printf("The rate of interest is \n");
    scanf("%f", &r);
    printf("The total time period is\n");
    scanf("%f", &t);
    x = p * r * t;
    si = x / 100;
    printf("The simple interest for the given amount, given rate of interest and the given time period is %f", si);
    return 0;
}