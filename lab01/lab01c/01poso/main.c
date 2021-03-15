#include <stdio.h>
#include <stdlib.h>
/*Programa que recebe um numero de segundos e o transforma num formato horas minutos segundos*/
int main()
{
    //Inicializar as variáveis necessárias
    int n_total_segundos;
    int horas;
    int minutos;
    int segundos;
    //Valor total de segundos
    scanf("%d", &n_total_segundos);
    //NUmero de horas
    horas = n_total_segundos / (60*60);
    n_total_segundos = n_total_segundos - (horas * 60 *60);
    //Numero de minutos
    minutos = n_total_segundos / 60;
    n_total_segundos = n_total_segundos - (minutos * 60);
    //Segundos
    segundos = n_total_segundos;

    //Imprimir a expressão final
    printf("%d horas, %d minutos, %d segundos ", horas, minutos, segundos);

    return 0;
}
