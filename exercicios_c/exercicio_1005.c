//Problema 1005 - beecrownd
//Programa calcula média de duas notas conforme peso de cada uma

#include<stdio.h>

int main(){

    double nota_1, nota_2, media;

    scanf("%lf %lf", &nota_1, &nota_2);

    media = (nota_1 * 3.5 + nota_2 * 7.5) / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}