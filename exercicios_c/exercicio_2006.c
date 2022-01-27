// Problema 2006  - beecrowd 
//Programa mostra quantas pessoas acertaram tipo de chá correto

#include<stdio.h>

int main(){

    int tipo_cha, resp1, resp2, resp3, resp4, resp5, c = 0;

    scanf("%d", &tipo_cha);

    scanf("%d %d %d %d %d", &resp1, &resp2, &resp3, &resp4, &resp5);

    if(resp1 == tipo_cha){
        c++;
    }  
    
    if(resp2 == tipo_cha){
        c++;

    }  

    if(resp3 == tipo_cha){
        c++;

    } 
    
    if(resp4 == tipo_cha){
        c++;

    } if(resp5 == tipo_cha){
        c++;
    }
    
    printf("%d\n", c);

    return 0;
}