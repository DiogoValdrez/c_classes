#include <stdio.h>
#include <stdlib.h>

int fact(int numb);

void main(){
    int m, res;
    printf("Imput M: ");
    scanf("%d", &m);
    for(int i = 0; i <= m; i++){
        for(int l = m-i; l >= 0; l--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            res = fact(i)/(fact(j)*fact(i-j));
            printf("%d ", res);
        }
        printf("\n");
    }

}

int fact(int numb){
    int facto = 1;
    for(int i = 1; i<=numb; i++){
        facto  = facto * i;
    }
    return facto;
}