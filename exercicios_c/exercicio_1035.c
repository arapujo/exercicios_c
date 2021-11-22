/* Problema 1035  - becrowd */
/* Programa faz teste de seleção com 4 valores */

#include<stdio.h>

int main(){

    int a, b, c, d;

    //printf("Insira 4 valores inteiros: ");
    scanf("%d %d %d %d" ,&a, &b, &c, &d);

    int par = a % 2 == 0 ? 1 : 0;

    if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && par == 1){
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}