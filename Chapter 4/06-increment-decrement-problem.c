#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int result = --a + b++ * ++a - a-- + --b;
    printf("a: %d, b: %d, result: %d\n", a, b, result);

    return 0;
}