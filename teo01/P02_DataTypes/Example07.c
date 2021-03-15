#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    double d;

    printf("Insira um float e um double: ");
    scanf("%f %lf", &f, &d);
    printf("\nValores lidos: \n%f \n%lf\n", f, d);
    printf("\nValores lidos: \n%6.2e \n%8.3e\n", f, d);

    printf("Insira um float e um double: ");
    scanf("%6f %6lf", &f, &d);
    printf("\nValores lidos: \n%f \n%lf\n", f, d);
    printf("\nValores lidos: \n%6.2e \n%8.3e\n", f, d);

    return 0;
}
