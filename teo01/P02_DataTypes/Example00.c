#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

float per_circ(float r);

int main()
{
    float raio = 5;

    printf("Per. circ. de raio\
           %f = %.3f\n", raio, per_circ(raio));
    return 0;
}

float per_circ(float r)
{
    return 2*PI*r;
}
