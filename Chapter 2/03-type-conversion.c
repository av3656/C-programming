#include <stdio.h>
int main()
{
    float a = 11;
    int b = 3;
    int c = 9 / 10;
    printf("The value when a is divides by b is %f\n", a / b);
    // we can use float one time to get the value in decimal form.
    printf("The value of c is %d", c);
    // The value of c is 0 because we take c as (int) form.
    return 0;
}