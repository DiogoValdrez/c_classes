#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Operadores de Atribuição!\n");
    printf("x = %d, y = %d\n", x, y);
    x = 1024;
    y = 33;
    printf("x = %d, y = %d\n", x, y);
    x -= y;
    printf("x = x - y = %d\n", x);
    y += x;
    printf("y = y + x = %d\n", y);
    x *= y;
    printf("x = x * y = %d\n", x);
    z = x / 2 * y;
    x /= 2 * y;
    printf("z = x / (2 * y) = %d\nz = x / 2 * y = %d\n", x, z);
    return 0;
}

