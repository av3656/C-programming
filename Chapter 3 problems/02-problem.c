#include <stdio.h>

int main()
{
    int p, c, m, t, x;
    printf("Total marks is Physics is \n");
    scanf("%d", &p);
    printf("Total marks is Chemistry is \n");
    scanf("%d", &c);
    printf("Total marks is Mathmatics is \n");
    scanf("%d", &m);
    t = p + c + m;
    x = t / 3;
    if (x >= 40 && p >= 33 && c >= 33 && m >= 33)
    {
        printf("Congratulations! Student has passed the examination.");
    }
    else
    {
        printf("Oh! Student got failed in the examination.");
    }

    return 0;
}
/*
 Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/