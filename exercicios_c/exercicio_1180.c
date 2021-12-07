// Problema 1180 - beecrowd 
//Programa mostar menor elemento de um vetor e sua posição

#include <stdio.h>

int main(){

    int n, i, menor = 0, posicao = 0;

    //printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int x[n];

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        menor = x[0];
    }

    for(i = 0; i < n; i++){
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
} 