#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int i = 1234567890;
    float f1 = 123E8;
    double d = 987.654321E40;

    printf("int storage size = %lu\nint min value = %d\nint max value = %d\n\n",
           sizeof(int), INT_MIN, INT_MAX );
    printf("i = %15d\n\n",i);
    printf("float storage size = %lu\nfloat min value = %10e\nfloat max value = %10e\n\n",
           sizeof(int), FLT_MIN, FLT_MAX );
    printf("double storage size = %lu\ndouble min value = %10e\ndouble max value = %10e\n\n",
           sizeof(int), DBL_MIN, DBL_MAX );
    printf("f = %f = %+15e = %15.3E\n\n", f1, f1, f1);
    printf("d = %f = %+15e = %15.3E\n\n", d, d, d);
    return 0;
}
