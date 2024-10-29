#include <stdio.h>
int main()
{
    float c, x, f;
    printf("Given temperature in celcius is ", c);
    scanf("%f", &c);
    x = c * 9 / 5;
    f = x + 32;
    printf("Temperature in Farhenheit is%f", f);
    return 0;
}