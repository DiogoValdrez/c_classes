#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    short z;

    printf("Operadores Aritméticos!\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    x = 1024;
    y = 33;
    printf("x = %d, y = %d\n", x, y);
    printf("x + y = %d\nx - y = %d\n", x+y, x-y);
    printf("x * y = %d\nx / y = %d\n", x*y, x/y);
    printf("x % y = %d\n", x%y);
    printf("x = %d, y = %d\n", x, y);
    z = x*y;   // Atenção z é um short
    printf("z = x * y = %d\n", z);
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("x = %d\n",x);
    return 0;
}
