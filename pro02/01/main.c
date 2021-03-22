#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nat = 0, i;
    int sum = 0;
    int nod = 0; //number of divisiors
    float media;
    do{
        printf("Escreva um inteiro\n");
        if(scanf(" %d", &nat) != 1){
            printf("ERRO. Insira um inteiro\n");
            scanf("%*s"); //discarta uma string
        }
    }while(nat < 1);

    printf("%d é divisivel por: \n", nat);
    for(i = 1; i <= nat; i++)
    {
        if(nat%i == 0)
        {
            printf("->%d\n", i);
            sum = sum + i;
            nod = nod + 1;
        }
    }
    media = (float)(sum/nod);
    printf("A média é %.3f", media);


    return 0;
}
