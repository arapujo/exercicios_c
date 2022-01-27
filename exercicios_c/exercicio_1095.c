// Problema 1095  - beecrowd 
//Programa mostra sequência IJ (I + 3 e J - 5)

#include<stdio.h>

int main(){

    int i, j;

   
         for(i = 1, j = 60; j >= 0; i = i+3, j = j-5){
            printf("I=%d J=%d\n", i, j);
        }

    return 0;
}