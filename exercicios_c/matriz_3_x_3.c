//Programa preenche matriz 3x3

#include <stdio.h>

int main(){

    int x[3][3], //matriz
        i,       //linha
        j;       //coluna

    //leitura matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3;){
            printf("Insira valores entre 1 e 9: \n");
            scanf("%d", &x[i][j]);

            //verifica se nº está dentro do intervalo 0 < x < 10
            if(x[i][j] > 0 && x[i][j] < 10) {  
                j++;
            } else {
                printf("Valor invalido!\n");
            }
        }
    }

    //imprimi matriz
    printf("\nMatriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
   
    return 0;
} 