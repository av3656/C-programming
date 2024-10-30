#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This is true because the value is non zero.\n");
    }
    // value can be negative but is has to be non-zero
    if (-21 + 10)
    {
        printf("This is true because value may be negative but has to be non zero.\n");
    }
    if (0)
    {
        printf("This is false because the value is zero");
    }

    return 0;
}