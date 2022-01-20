/* Problema 1060  - beecrowd */
/* Programa calcula quantidade de números positivos */

#include<stdio.h>

int main(){

    double valores[6];

    int i, c = 1;

    for(i = 1; i < 6; i++){
       
            scanf("%lf ", &valores[i]);
            if(valores[i] > 0 ){
            c++;
        }
    }

    printf("%d valores positivos\n", c);
    
    return 0;
}