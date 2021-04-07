#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand((unsigned)time(NULL));
    int num[2];
    int res, rep = 0;
    for(int i = 0; i<2; i++){
        num[i] = rand()%9 + 1;
    }
    do{
        if(rep!=0){
            printf("Wrong. Try again!\n");
        }
        printf("Imput the result of the following question.\n(If u wanna quit put 0)\n");
        printf("%d * %d = ", num[0], num[1]);
        scanf("%d", &res);
        rep = 1;
    }while((res != num[0]*num[1]) && (res != 0));
    if(res == 0){
        printf("Exiting...\nSee you next time!\n");
        return;
    }
    printf("You're right, nice job!\n");
    return;

}