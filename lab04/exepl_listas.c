#include <stdlib.h>
#include <stdio.h>

typedef struct dados
{
    //dados a guardar
    char nome[50];
    int populacao;

    //ponteiro para o seguinte na lista
    struct dados* next;

} dados_t;

int main(){
    dados_t *d1 = malloc(sizeof(dados_t));
    dados_t *d2 = malloc(sizeof(dados_t));
    dados_t *d3 = malloc(sizeof(dados_t));

    d1->nome == "a";
    d2->nome == "b";
    d3->nome == "c";

    d1->populacao = 1;
    d2->populacao = 2;
    d3->populacao = 3;

    d1->next = d2;
    d2->next = d3;
    d3->next = NULL;

    imprime_lista(d1);
}

void imprime_lista(dados_t * lista){
    dados_t *aux = lista;
    while(aux != NULL){
        printf("população: %d\n", aux->populacao);
        aux = aux->next;
    }
}
