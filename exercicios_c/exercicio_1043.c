//Problema 1043 - beecrownd
//Programa verifica se valores formam triângulos e calcula perímetro se for verdadeiro, caso contrário, calcula área de trapézio

#include<stdio.h>

int main(){

    double a, b, c, per, area, r = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    //verifica se valores formal tringulo
    if(a + b > c && a + c > b && b + c > a){
        r = 1;
    } else {
        r = 0;
    }

    //perímetro triângulo
    if(r == 1){
        per = a + b + c;
        printf("Perimetro = %.1lf\n", per);
    //área trapézio
    } else {
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}