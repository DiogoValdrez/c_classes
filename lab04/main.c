#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 100

char **le_ficheiro(char *, int *);

int main(int arc, char **argv){
    char **linhas = NULL;
    int n_linhas = 0;

    linhas = le_ficheiro("RunResults.txt", &n_linhas);

    liberta_memoria(linhas, n_linhas);

    return EXIT_SUCCESS;
}

char **le_ficheiro(char *_filename, int *_n_linhas){
    FILE * inputpf;
    char buffer[MAX_LINE_SIZE];//é destruido quando a função retorna
    int length;
    char **_linhas;

    // arir o ficheiro e checkar erros
    inputpf = fopen(_filename, "r");
    if(inputpf == NULL){
        printf("Erro a abrir o ficheiro\n");
        exit(EXIT_FAILURE);
    }

    *_n_linhas = 0;
    while(fgets(buffer, MAX_LINE_SIZE, inputpf) != NULL){//se em vez de file metermos stdi tambem funciona mas le do terminal
        //ignora a primeira linha
        if(*_n_linhas != 0){
            length = strlen(buffer);            
            if(buffer[length-1] == '\n') buffer[length-1] = '\0';

            if(*_n_linhas == 1){
                if(_linhas = (char**)malloc(sizeof(char*)) == NULL){
                    printf("Erro na alocação de memoria\n");
                    exit(EXIT_FAILURE);
                }
            }else{
                if(_linhas = (char**)realloc(_linhas, *_n_linhas * sizeof(char*)) == NULL){
                    printf("Erro no realloc\n");
                    exit(EXIT_FAILURE);
                }
            }//podiam ser usadas listas em vez de vetores caso seja um ficheiro grande

            if(_linhas[(*_n_linhas)-1] == NULL) exit(EXIT_SUCCESS);

            //aloca memoria para a string
            _linhas[(*_n_linhas)-1] = (char*) malloc(sizeof(char)* length + 1); 
            //copia para a memoria allocada
            strcpy(_linhas[(*_n_linhas)-1], buffer);         
        }
        (*_n_linhas)++;
    }
    (*_n_linhas)--;
    fclose(inputpf);
    return _linhas;
}

void liberta_memoria(char **linhas,int *n_linhas){
    int i;
    for(i = 0; i < n_linhas; i++){
        free(linhas[i]);
    }
    free(linhas);
}

void procura_nome(char **_linhas, int _n_linhas, char *_nome, char **_pos_geral, char **_pos_escalao, char **_escalao){
    int i;
    char *token;
    int token_counter = 0;
    //procurar em cada linha
    for(i = 0; i < _n_linhas; i++){
        //se for a linha desejada ent vai intrepertar os dados
        if(strstr(_linhas[i], _nome) != NULL){
            
            token = strtok(_linhas[i], "\t");//cuidado que se tiver 2 \t seguidas(haver colunas vazias) dá problemas(usar strsep nesse caso)
            token_counter = 1;
            while(token != NULL){
                //logica de cada coluna
                switch (token_counter)
                {
                case 1:
                    *_pos_geral = token; //so pode ser feito assim se as _linhas n foram free
                    break;
                case 2:
                    *_escalao = token; 
                    break;
                case 3:
                    *_pos_escalao = token; 
                    break;
                }
                //avança para a seguinte coluna
                token = strtok(NULL, "\t");//null é usado para continuar no ultima posição                

            }
            break;
        }
    }
}