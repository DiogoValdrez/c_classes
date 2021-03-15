#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define grav 9.8
#define pi 3.1416
/*Programa que recebe angulo, velocidade inicial e altura do teto
e que imprime se o projetil lancado bate no teto e a que distancia do cesto precisa de estar*/

int main()
{
    //Initialize variables
    double ang_graus, vel_inicial, alt_teto, ang_rad, dist_cesto, alt_max;

    //Input of variables
    scanf("%lf", &ang_graus);
    scanf("%lf", &vel_inicial);
    scanf("%lf", &alt_teto);
    //Transformar angualo em graus para radianos
    ang_rad = (ang_graus/180) * pi;

    //Calcular distancia do cesto
    dist_cesto =  (pow(vel_inicial, 2)* sin(2*ang_rad))/grav;

    //Calcular altura máxima
    alt_max = (pow(vel_inicial*sin(ang_rad), 2))/(2*grav);

    //Outputs distancia do cesto
    printf("Distância do centro do cesto: %.2lf\n", dist_cesto);

    //Output bater ou nao no teto
    if (alt_max < alt_teto){
        printf("O projetil não bate no teto.\n");
    }else {
        printf("O projétil bate no teto.\n");
    }
    return 0;
}
