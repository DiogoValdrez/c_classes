#include <stdio.h>
#include <stdlib.h>
#define JAN 31
#define FEV 28
#define MAR 31
#define ABR 30
#define MAI 31
#define JUN 30
#define JUL 31
#define AGO 31
#define SET 30
#define OUT 31
#define NOV 30
#define DEZ 31

int main()
{
    int mes;
    printf("Escreva o numero do mes\n");
    scanf(" %d", &mes);
    switch (mes){
        case 1:
            printf("\n%d dias", JAN);
            break;
        case 2:
            printf("\n%d dias", FEV);
            break;
        case 3:
            printf("\n%d dias", MAR);
            break;
        case 4:
            printf("\n%d dias", ABR);
            break;
        case 5:
            printf("\n%d dias", MAI);
            break;
        case 6:
            printf("\n%d dias", JUN);
            break;
        case 7:
            printf("\n%d dias", JUL);
        case 8:
            printf("\n%d dias", AGO);
        case 9:
            printf("\n%d dias", SET);
            break;
        case 10:
            printf("\n%d dias", OUT);
            break;
        case 11:
            printf("\n%d dias", NOV);
            break;
        case 12:
            printf("\n%d dias", DEZ);
            break;
        default:
            printf("Well, u stupid");
            break;

    }
    return 0;
}
