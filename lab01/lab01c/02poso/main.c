#include <stdio.h>
#include <stdlib.h>
/*Lab1, exercício 2
programa lê dois tempos, especificadps em hora minutos, segundos
em que o primeiro é maior que o segundo e apresentar a diferenca no mesmo formato*/
int main()
{
    //Inicializar variaveis
    //Tempo1
    int horas1;
    int minutos1;
    int segundos1;
    int total_segundos1;
    //Tempo2
    int horas2;
    int minutos2;
    int segundos2;
    int total_segundos2;
    //Tempo diferença
    int horas_dif;
    int minutos_dif;
    int segundos_dif;
    int total_segundos_dif;

    //Inserir tempos
    scanf("%d %d %d\n",&horas1,&minutos1,&segundos1);
    scanf("%d %d %d",&horas2,&minutos2,&segundos2);

    //Transformar os formatos de tempos so em segundos
    total_segundos1 = horas1*3600 + minutos1*60 + segundos1;
    total_segundos2 = horas2*3600 + minutos2*60 + segundos2;

    //Diferenca entre tempos
    total_segundos_dif = total_segundos1 - total_segundos2;

    //Transformar total de segundos para o formato original
    horas_dif = total_segundos_dif / (60*60);
    total_segundos_dif = total_segundos_dif - (horas_dif * 60 *60);
    //Numero de minutos
    minutos_dif = total_segundos_dif / 60;
    total_segundos_dif = total_segundos_dif - (minutos_dif * 60);
    //Segundos
    segundos_dif = total_segundos_dif;

    //Imprimir a diferneca no formato certo
    printf("%d horas, %d minutos, %d segundos", horas_dif, minutos_dif, segundos_dif);

    return 0;
}
