/* Problema 1048  - beecrowd */
/* Programa calcula quantida de números positivos */

#include<stdio.h>

int main(){

    float valores[6];

    int i, c = 0;

    for (i = 1; i < 6; i++);{
        scanf("%f ", &valores[i]);
    }

    for (i = 1; i < 6; i++);{
        if(valores[i] > 0 ){
            c++;
        }
    }

    printf("%d", c);
    
    return 0;
}