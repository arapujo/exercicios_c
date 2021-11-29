// Problema 1142  - beecrowd 
//Programa mostra quantidade de linhas desejada

#include<stdio.h>

int main(){

    int num, i;

    scanf("%d", &num);

    for(i = 1; i <= num*4; i+=4){
        printf("%d ", i);
        printf("%d ", i+1);
        printf("%d ", i+2);
        printf("PUM\n");
       
    }

    return 0;
}