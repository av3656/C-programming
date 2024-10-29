#include <stdio.h>
int main()
{
    int a = 4, b = 8, c = 12, d = 16, e;
    printf("The value is %d\n", a * b + c - d);
    // 4*8+12-16
    // 32+12-16
    // 44-16
    // 28
    e = c * b / d * a - d / a;
    printf("The value of c is %d", e);
    // e=12*8/16*4-16/4
    // e=96/16*4-4
    // e=6*4-4
    // e=24-4
    // e=20
    return 0;
}