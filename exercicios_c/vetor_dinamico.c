
//Programa aloca dinamicamente um vetor de 5000 elementos e o preenche com números de 0 a 4999

#include<stdio.h>

int main(){

    int num_elementos = 5000, //quantidade de elementos do vetor
        *vetor,               //ponteiro irá armazenar endereço inicial da memória
        i;                    //índice do vetor

    vetor = malloc(num_elementos * sizeof(int)); //reserva a quantidade de memória

    if(vetor == NULL){                       

        printf("Memoria insuficiente!\n"); //erro ao alocar memória

    } else {
        
        for(i = 0; i < num_elementos; i++){ 
            vetor[i] = i; //preenche vetor com nºs de 0 a 4999
        }

        for(i = 0; i < num_elementos; i++){ 
            printf("%d ", vetor[i]);        //imprimi vetor
        }

    free(vetor); //libera espaço alocado na memória

    }

    return 0;
}