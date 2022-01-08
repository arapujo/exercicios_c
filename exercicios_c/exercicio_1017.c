//Problema 1017 - beecrownd
//Programa calcula quantidade de combustível que será necessária 

#include<stdio.h>

int main(){

    int tempo, v_media, distancia;

    double litro;

    scanf("%d %d", &tempo, &v_media);

    distancia = tempo * v_media;

    litro = distancia / 12.0;

    printf("%.3lf\n", litro);

    return 0;
} 