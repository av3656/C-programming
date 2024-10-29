#include <stdio.h>
int main()
{
    int a = 11, b = 8, c, d;
    c = a + b;
    d = c % a;
    printf("The value of a is %d and the value of b is %d and the sum of a and b is %d\n", a, b, c);
    // Modulus operator is used to ger remainder.
    printf("The remainder when c is divided by a is %d\n", d);

    // This does not work in C language for finding Exponent.
    // d=a^d;
    return 0;
}