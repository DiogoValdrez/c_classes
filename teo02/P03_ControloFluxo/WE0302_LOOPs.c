#include <stdio.h>
#include <stdlib.h>

#define Val(i) (((i>20) || (i<-1)) ? 0 : 1)
#define Max(i,j) ((i>j) ? i : j)

int main()
{
    float NLab, PInt, PFin, T1, T2, Ex;
    int i;

    printf("Insira as classifficações nas várias componentes de aValiação ");
    printf("(caso não tenha sido aValiado insira -1)\n");
    for(i = 1; i < 5; i++)
    {
        printf("Aluno nº %d\n",i);
        do  {
            printf("Insira as notas pela seguinte ordem: (NLab PInt PFin T1 T2 Ex)\n");
            scanf("%f %f %f %f %f %f", &NLab, &PInt, &PFin, &T1, &T2, &Ex);
        } while (!(Val(NLab)*Val(PInt)*Val(PFin)*Val(T1)*Val(T2)*Val(Ex)));
        if ((NLab != -1) && (PInt != -1) && (PFin != -1) && ((Ex != -1) || ((T1 != -1) && (T2 != -1))))
            if ((PFin >= 9.5) && ((PFin*0.6 + PInt*0.4) >= 9.5))
                if ((Ex >= 9.5) || ((T1*0.5 + T2*0.5) >= 9.5))
                    printf("AP, Nota = %.2f\n",(PFin*0.6 + PInt*0.4)*0.5 + Max(T1*0.5+T2*0.5,Ex)*0.4 + NLab*0.1);
                else
                    printf("REP\n");
            else
                printf("REP\n");
        else
            printf("NA\n");
    }
    return 0;
}

