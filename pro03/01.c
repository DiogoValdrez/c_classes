#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_VECT 100

void load_vect(char str_vect[10][MAX_VECT],int *ptr_N);
void sort_vect(char str_vect[10][MAX_VECT],int *ptr_N);
int compare(const void * a, const void * b);
void print_vect(char str_vect[10][MAX_VECT],int *ptr_N);

int main(){
    int N;
    char str_vect[10][MAX_VECT+1];
    load_vect(str_vect, &N);
    sort_vect(str_vect, &N);
    print_vect(str_vect, &N);
    return EXIT_SUCCESS;
}

void load_vect(char str_vect[10][MAX_VECT], int *ptr_N){   
    int e;
    do{
        e = 1;
        printf("\nNumber of strings(1-10):");
        if(scanf("%d", ptr_N)<1){
            printf("ERRO!!");
            e = 0;
        }
    }while (e == 0 || *ptr_N > 10 || *ptr_N < 1);

    printf("Strings:");
    for(int i = 0; i < *ptr_N; i++){;
        char prov_str[MAX_VECT];
        scanf("%s", prov_str);
        strcpy(str_vect[i], prov_str);
    }
    return;
}
static int cmpstringp(const void *p1, const void *p2)
{
   return strcmp((char *) p1, (char *) p2);
}

void sort_vect(char str_vect[10][MAX_VECT],int *ptr_N){
    qsort(str_vect, *ptr_N, sizeof(char)*MAX_VECT, cmpstringp);
}

void print_vect(char str_vect[10][MAX_VECT],int *ptr_N){
    for(int i = 0; i <= *ptr_N-1; i++){;
        printf("%s\n", str_vect[i]);
    }

}