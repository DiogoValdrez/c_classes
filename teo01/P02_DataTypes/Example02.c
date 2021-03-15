#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Dimensão e Valores Limite\n");
    printf(">char storage size = %lu,\n min value = %d, max value = %d\n", sizeof(char), 0, UCHAR_MAX);
    printf(">short storage size = %lu,\n min value = %d, max value = %d\n", sizeof(short),SHRT_MIN, SHRT_MAX);
    printf(">int storage size = %lu,\n min value = %d, max value = %d\n", sizeof(int),INT_MIN, INT_MAX);
    printf(">long storage size = %lu,\n min value = %ld, max value = %ld\n", sizeof(long),LONG_MIN, LONG_MAX);
    printf(">long long storage size = %lu,\n", sizeof(long long));
    printf(">float storage size = %lu,\n min value = %.10e, max value = %.10e\n", sizeof(float),FLT_MIN, FLT_MAX);
    printf(">double storage size = %lu,\n min value = %.10e, max value = %.10e\n", sizeof(double),DBL_MIN, DBL_MAX);
    printf(">long double storage size = %lu,\n min value = %.10Le, max value = %.10Le\n", sizeof(long double),LDBL_MIN, LDBL_MAX);
    return 0;
}
