#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb;

    do
    {
        printf("Insert a number between 1 and 12:\n");
        scanf(" %d", &numb);
    }while(numb<1||numb>12);
    switch(numb)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("That month has 31 days");
            break;
        case 2:
            printf("That month has 29 days");
            break;
        default:
            printf("that month has 30 days");
            break;

    }
    return 0;
}
