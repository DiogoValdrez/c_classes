#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb;
    printf("Insert a number between 1 and 12:\n");
    do
    {
        scanf(" %d", &numb);
        switch(numb)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("That month has 31 days\n");
            break;
        case 2:
            printf("That month has 29 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("that month has 30 days\n");
            break;

    }

    }while((numb>=1)&&(numb<=12));


    return 0;
}
