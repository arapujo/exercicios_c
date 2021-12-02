// Problema 1173  - beecrowd 
//Programa coloca valor lido como 1ª posição do vetor e o restante como o dobro

#include<stdio.h>

int main(){

    int n[10], i, v;

    scanf("%d", &v);

    for(i = 0; i < 10; i++){
        n[i] = v;
        v = v*2;
        printf("N[%d] = %d\n",i, n[i]);
    
    }

    return 0;
}  

