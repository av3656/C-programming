#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    // if these is single function in IF statement then there is no need of curley bracket.
    else
        printf("I am not 11");
    return 0;
}
/*
The output of this code is "I am 11".
Because in C language = is Assignment operator.
== is used as equal to
So it will become if(11)
and then if(non zero) is true.
That's why it gives output of "i am 11".
*/