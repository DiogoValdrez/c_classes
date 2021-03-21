#include <stdio.h>
#include <stdlib.h>

int eprimo(int);

int main()
{
    for(int i = 0; i <= 1000; i++)
    {
        if(eprimo(i) == 1 && eprimo(i+2) == 1)
        {
            printf("%d e %d são primos casados\n", i, i++);
        }
    }
    return 0;
}

int eprimo(int nat)
{
    int nod = 0;
    for(int i = 1; i <= nat; i++)
    {
        if(nat%i == 0)
        {
            nod = nod + 1;
        }
    }
    if(nod == 2)
    {
        return 1;
    }else{
        return 0;
    }
}
