#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, lines, i, j, k;
    printf("Insira a altura do triângulo: \n");
    scanf(" %d", &h);
    lines = h*2-1;
    for(i = 1; i <= lines; i++)
    {
        if(i <= h)
        {
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }else{
            for(k = lines-i; k >= 0; k--)
            {
                printf("* ");
            }

        }
        printf("\n");
    }



    return 0;
}
