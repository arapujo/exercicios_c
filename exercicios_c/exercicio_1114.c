// Problema 1114  - beecrowd 
//Programa verifica senha

#include<stdio.h>

int main(){

    int senha;

    do{
        scanf("%d", &senha);

        if(senha != 2002){
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
        }
    }
    while(senha!=2002);

    return 0;
}  