// Problema 1174 - beecrowd 
//Programa mostra posições de vetor que armazena valores menor ou igual a 10

#include<stdio.h>

int main(){

    int i;
    double a[100];
    
    for(i = 0; i < 100; i++){
        scanf("%lf", &a[i]);
    }

    for(i = 0; i < 100; i++){

        if (a[i] <= 10.0){
            printf("A[%d] = %.1lf\n", i, a[i]);
        }

    }

    return 0;
} 