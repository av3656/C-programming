#include <stdio.h>
int main()
{
    float pie = 3.14, r, a, h, v;
    printf("Radius of circle is \n", r);
    scanf("%f", &r);
    printf("Height of cylinder is \n", h);
    scanf("%f", &h);
    a = pie * r * r;
    v = a * h;
    printf("Volume of the cylinder is %f", v);

    return 0;
}