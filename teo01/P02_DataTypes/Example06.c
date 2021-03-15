#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Insira um inteiro: ");
    scanf("%d", &i);
    printf("\nValor lido: %d\n", i);

    printf("Insira um inteiro com mais de 3 dígitos: ");
    scanf("%3d", &i);
    printf("\nValor lido: %d\n", i);

    return 0;
}
