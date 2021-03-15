#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define grav 9.8
#define pi 3.1416

int main()
{
    int c, vo, d;
    float radmin, radmax, gmax, gmin;
    scanf(" %d", &d);
    scanf(" %d", &vo);
    scanf(" %d", &c);

    radmin = (asin(((d - (c/2)) * grav)/(vo*vo))/2);
    radmax = (asin((((d + (c/2)) + c) * grav)/(vo*vo))/2);

    gmin = (radmin * pi)/180;
    gmax = (radmin * pi)/180;

    printf("[%f, %f]", radmin, radmax);

    return 0;
}
