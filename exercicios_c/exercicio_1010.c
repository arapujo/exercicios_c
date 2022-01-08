//Problema 1010 - beecrownd
//Programa realiza o total da compra de dois produtos

#include<stdio.h>

int main(){

    int cod_1, cod_2, qtd_1, qtd_2;

    double preco_1, preco_2, total;

    scanf("%d %d %lf", &cod_1, &qtd_1, &preco_1);

    scanf("%d %d %lf", &cod_2, &qtd_2, &preco_2);

    total = (qtd_1 * preco_1) + (qtd_2 * preco_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}