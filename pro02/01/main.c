#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nat, i;
    int sum = 0;
    int nod = 0; //number of divisiors
    float media;
    printf("Escreva um inteiro\n");
    scanf(" %d", &nat);
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
