//Problema 1009 - beecrownd
//Programa calcula total do salário mais comissão

#include<stdio.h>

int main(){

    char nome[15];

    double sal_fixo, tot_venda, comissao, sal_reajustado;

    scanf("%s", nome);
    scanf("%lf %lf", &sal_fixo, &tot_venda);

    comissao = tot_venda * 0.15;

    sal_reajustado = sal_fixo + comissao;

    printf("TOTAL = R$ %.2lf\n", sal_reajustado);

    return 0;    
}