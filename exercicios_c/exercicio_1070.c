/* Problema 1070  - beecrowd */
/* Programa calcula 6 números ímpares consecutivos a partir de número fornecido */

#include<stdio.h>

int main(){

    int num, i;

    scanf("%d", &num);

    for(i = num; i < num + 12; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}