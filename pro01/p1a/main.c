#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n, aux;
    while(i<3){
        if(scanf("%d", &n)<1){
            printf("Nao consegui ler um numero.Tente novamente\n");
            scanf("%*s");//deita fora a string q n conseguiu ler// o * serve para n ter de guardar emlado nenhum o que foi lido
        }else{
            if(n<2){
                printf("O numero %d não é primo\n", n);
            }else{
                aux = 2;
                while(n%aux != 0){
                    aux = aux +1;
                }
                if(n != aux){
                    printf("o numero %d nao e primo\n", n);
                }else{
                    printf("o numero %d e primo\n", n);
                }
                i = i + 1;
                }
        }
    }
    return 0;
}

