#include <stdio.h>
#include <stdlib.h>
#define MAX_VECT 1000

void imput(int* ptr_number, int vect[]);
void encode(int number, int vect[], int coded_vect[], int* ptr_coded_numb);
void decode(int coded_vect[], int* ptr_coded_numb, int decoded_vect[]);

int main(){
    int number;
    int coded_numb;
    int vect[MAX_VECT];
    int coded_vect[2*MAX_VECT];
    int decoded_vect[MAX_VECT];
    imput(&number,vect);
    encode(number,vect,coded_vect,&coded_numb);
    decode(coded_vect,&coded_numb,decoded_vect);
}

void imput(int* ptr_number, int vect[]){
    int i;
    printf("Insert the number of numbers that u pretend to insert: ");
    scanf("%d", ptr_number);
    printf("Insert the numbers:\n");
    for(i = 0; i < *ptr_number; i++){
        scanf("%1d", &vect[i]);
    }
    return;
}

void encode(int number, int vect[], int coded_vect[], int* ptr_coded_numb){
    int prov_n = 1;
    int j = 0;
    for(int i = 0; i < number; i++){
        if(prov_n == 9 || vect[i] != vect[i+1]){
            coded_vect[j] = prov_n;
            coded_vect[j+1] = vect[i];
            j += 2;
            prov_n = 1;
        }else{
            prov_n += 1;
        }
    }
    *ptr_coded_numb = j;
    printf("\nCoded vector: ");
    for(int i = 0; i < *ptr_coded_numb; i++){
        printf("%d", coded_vect[i]);
    }
    return;
}
void decode(int coded_vect[], int* ptr_coded_numb, int decoded_vect[]){
    int h = 0;
    int prov_h;
    for(int i = 0; i < *ptr_coded_numb; i += 2){
        for(int j = 0; j < coded_vect[i]; j++){
            decoded_vect[j+h] = coded_vect[i+1];
            prov_h = j;
        }
        h = prov_h + h + 1;
    }
    printf("\nDecoded vector: ");
    for(int i = 0; i < h; i++){
        printf("%d", decoded_vect[i]);
    }
    printf("\n");
}