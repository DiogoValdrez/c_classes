#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 9.8

int main()
{
    double diametro, distancia, velocidade;
    double d = 0;
    double angulo = 0;
    double aux1, aux2;

    int correu_uma_vez = 0;

    printf("Insira o diametro do cesto, a distancia e a velocidade:\n");
    scanf(" %lf %lf %lf", &diametro, &distancia, &velocidade);

    while(angulo<=90){
        //Calcular a distância
        d = pow(velocidade, 2)*sin(2*angulo/180*M_PI)/g;

        if((d > distancia - diametro/2)&&(d < distancia + diametro/2)){

            if (correu_uma_vez == 0){
                printf("angulo: %lf distancia: %lf \n", angulo, d);
                correu_uma_vez = 1;
            }

            aux1 = d;
            aux2 = angulo;
        }
        angulo++;
    }

    printf("angulo: %lf distancia: %lf \n", aux2, aux1);
    return EXIT_SUCCESS;
}
