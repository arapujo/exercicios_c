//Problema 1014 - beecrownd
//Programa calcula o consumo médio de um automóvel

#include<stdio.h>

int main(){

    int t_distancia;
    
    double t_combustivel, t_consumo;

    scanf("%d %lf", &t_distancia, &t_combustivel);

    t_consumo = t_distancia / t_combustivel;

    printf("%.3lf km/l\n", t_consumo);

    return 0;
} 