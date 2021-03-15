#include <stdio.h>
#include <stdlib.h>

/*#define RADIO(numb) ((numb < 3E9)? 1:0)
#define MICRO(numb) (((numb >= 3E9)&& (numb < 3E12))? 1:0)
#define INFRARED(numb) (((numb >= 3e12) && (numb < 4.3e14))? 1:0)
#define VISIBLE(numb) (((numb >= 4.3e14) && (numb < 7.5e14))? 1:0)
#define ULTRAVIOET(numb) (((numb >= 7.5e14) && (numb< 3e17))? 1:0)
#define X(numb) (((numb >= 3e17) && (numb < 3e19))? 1:0)
#define GAMMA(numb) (numb >= 3e19 ? 1:0)*/

#define RADIO (3e9)
#define MICRO (3e12)
#define INFRARED (4.3e14)
#define VISIBLE (7.5e14)
#define ULTRAVIOET (3e17)
#define X (3e19)
#define GAMMA (3e19)

int menor(float numb, float wave);

int main()
{
    float numb;
    scanf("%E", &numb);
    //float i= (float) RADIO * 1;
    if (menor(numb, RADIO)){
        printf("\nRadio");
        }
    else if (menor(numb, MICRO)){
        printf("\nMICRO");
        }
    else if (menor(numb, INFRARED)){
        printf("\nINFRARED");
        }
    else if (menor(numb, VISIBLE)){
        printf("\nVISIBLE");
        }
    else if (menor(numb, ULTRAVIOET)){
        printf("\nULTRAVIOET");
        }
    else if (menor(numb, X)){
        printf("\nX");
        }
    else if (menor(numb, GAMMA)){
        printf("\nGAMMA");
        }
    else{
        printf("\nERROR!!!");
        }


    return 0;
}
int menor(float numb, float wave){
    if (numb < wave){
        return 1;
    }
    else if (numb >= wave){
        return 0;
    }
    else{
        printf("ERROR");
        return 0;
    }
}
