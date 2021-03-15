#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracteres[3];
    int numero = 0;
    int i;
    int potencia = 100;

    for(i=0; i<3; i++){

        do{
            scanf("%c", &caracteres[i]);
        }while(caracteres[i] > '9');

        //usar caracteres[i]-'0' para transformar o char em inteiro
        numero += (caracteres[i] - '0')*potencia;
        potencia/=10;
    }
    printf("O valor é: %d\n", numero*2);
    return 0;
}
