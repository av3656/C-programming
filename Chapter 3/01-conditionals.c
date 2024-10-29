#include <stdio.h>

int main()
{
    int a, b, c;
    printf("The age of student is ", a);
    scanf("%d", &a);
    if (a > 21)
    {
        printf("The student is eligible for the examination");
        // i am using if condition for checking eligibility of the students.
    }
    printf("The number is ", b);
    scanf("%d", &b);
    c = b % 9;
    // i am just checking the divisibility of the number given by user from 9.
    if (c == 0)
    {
        printf("The given number is divisible by 9");
    }

    return 0;
}