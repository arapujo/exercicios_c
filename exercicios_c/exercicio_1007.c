
//Problema 1007 - beecrownd
//Programa calcula a diferecaça do produto de n1 e n2 pelo produto de n3 e n4

#include<stdio.h>

int main(){

    int a, b, c, d, dif;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    dif = (a * b - c * d);

    printf("DIFERENCA = %d\n", dif);

    return 0;
}