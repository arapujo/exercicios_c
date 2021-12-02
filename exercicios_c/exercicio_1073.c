// Problema 1073  - beecrowd 
//Programa calcula quadrado de números pares

#include<stdio.h>

int main(){

    int num, i, resultado;

    scanf("%d", &num);

    for(i = 2; i <= num; i++){
        if(num % 2 == 0){
            printf("%d^2 = %d\n", i++, i*i);
        }

    return 0;
}  