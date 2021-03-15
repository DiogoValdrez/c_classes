#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double num;
    scanf(" %lf", &num);
    printf("\n");
    scanf(" %d", &n);

    switch(n){
        case 1:
            printf("\n %.1lf", num);
            break;
        case 2:
            printf("\n %.2lf", num);
            break;
        case 3:
            printf("\n %.3lf", num);
            break;
        case 4:
            printf("\n %.4lf", num);
            break;
        case 5:
            printf("\n %.5lf", num);
            break;
        case 6:
            printf("\n %.6lf", num);
            break;
        case 7:
            printf("\n %.7lf", num);
            break;
        default:
            printf("U dumb, invalid n");
            break;

    }
}
