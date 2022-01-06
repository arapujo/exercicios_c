//Programa aloca dinamicamente uma matriz 9 x 9 e a preenche com números aleatórios de 1 a 10

#include <stdio.h>
#define linhas 9
#define colunas 9

void gera_matriz(int **matriz, int l, int c);
void imprimi_matriz(int **matriz, int l, int c);
void desaloca_matriz(int **matriz, int l);

int main() {

   int **matriz,
        i, 
        j,
        l = linhas,
        c = colunas;

    //aloca linhas da matriz
    matriz = (int**)malloc(linhas*sizeof(int*));

    //aloca colunas da matriz
    for(i = 0; i < colunas; i++){
        matriz[i] = (int*)malloc(colunas*sizeof(int));
    }

    //verifica se memória foi liberada
    if(matriz == NULL) {
        printf("Memoria insuficiente!\n"); //erro ao alocar memória

    } else {
    
        gera_matriz(matriz, l, c);
        imprimi_matriz(matriz, l, c);
        desaloca_matriz(matriz,linhas);
    }

    return 0;

    }

    //gera matriz
    void gera_matriz(int **matriz, int l, int c){

        int i,j;

        //gera números aleatórios de 1 a 10
        for(i = 0; i < l; i++){
            for(j = 0; j < c; j++){
                matriz[i][j] = rand() % 10;
            }
        }
    }

    //imprimi matriz 
    void imprimi_matriz(int **matriz, int l, int c){

        int i,j;

        for(i = 0; i < l; i++){
            for(j = 0;j < c; j++){
                printf(" %d",matriz[i][j]);
            }
            printf("\n");
        }
    }

    //desaloca espaço da memória
    void desaloca_matriz(int **matriz, int l){

        int i;

        for(i = 0; i < l; i++){

            free(matriz[i]);
        }

        free(matriz);
    }
