//Problema 1006 - beecrownd
//Programa calcula média de três notas conforme peso de cada uma

#include<stdio.h>

int main(){

    double nota_a, nota_b, nota_c, media;

    scanf("%lf %lf %lf", &nota_a, &nota_b, &nota_c);

    media = (nota_a * 2 + nota_b * 3 + nota_c * 5) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}