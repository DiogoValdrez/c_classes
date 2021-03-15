#include <stdio.h>
#include <stdlib.h>
int conc(int p, int s,  int t);
int main()
{
    int p, s, t, r;
    printf("Insira os números\n");
    scanf(" %d", &p);
    scanf(" %d", &s);
    scanf(" %d", &t);
    r = 2 * conc(p, s, t);
    printf("The result is: %d", r);
    return 0;
}
int conc(int p, int s,  int t){
    int f = p * 100 + s * 10 + t;
    return f;
}
