#include <stdio.h>
#include <stdlib.h>
#define MAX 10;

void load_mat(int m[10][10], int m_, int n_);
void sum_mat(int m1[10][10], int m2[10][10], int res[10][10],  int m_, int n_);
void print_mat(int m[10][10], int m_, int n_);

int main(){
    int m, n, prov;
    int m1[10][10];
    int m2[10][10];
    int res[10][10];

    do{
        printf("\nImput the matrix size(mxn), \nThe max is 10x10: ");
        if(scanf("%dx%d", &m, &n)<1){
            printf("ERROR!\n");
            return;
        }        
    }while(m > 10 || n > 10 || m < 1 || n < 1);
    printf("%dx%d\n", m, n);
    load_mat(m1, m, n);
    load_mat(m2, m, n);
    sum_mat(m1, m2, res, m, n);
    print_mat(res, m, n);
    return EXIT_SUCCESS;
}

void load_mat(int m[10][10],  int m_, int n_){
    printf("Insert a matrix(%dx%d) number by number:\n", m_, n_);
    for(int i = 0; i < m_; i++){
        for(int j = 0; j < n_; j++){
            if(scanf("%d", &m[i][j])<1){
                printf("ERROR!\n");
                return;
            }            
        }
    }
    return;
}

void sum_mat(int m1[10][10], int m2[10][10], int res[10][10],  int m_, int n_){
    for(int i = 0; i < m_; i++){
        for(int j = 0; j < n_; j++){
            res[i][j] = m1[i][j] + m2[i][j];    
        }
    }
    return;
}

void print_mat(int m[10][10], int m_, int n_){
    printf("\nAnswer:\n");
    for(int i = 0; i < m_; i++){
        for(int j = 0; j < n_; j++){
            printf("%d", m[i][j]);          
        }
        printf("\n");
    }
    return;
}
