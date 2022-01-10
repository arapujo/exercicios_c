// Problema 1018  - beecrowd 
//Programa calcula o menor número de notas que um valor pode ser decomposto

#include <stdio.h>

int main(){

    int num;

    scanf("%i", &num);
    
    //mostra valor
    printf("%i\n", num);
    
    //nota de 100
    printf("%i nota(s) de R$ 100,00\n", num/100);
    num %= 100;

    //nota de 50
    printf("%i nota(s) de R$ 50,00\n", num/50);
    num %= 50;

    //nota de 20
    printf("%i nota(s) de R$ 20,00\n", num/20);
    num %= 20;

    //nota de 10
    printf("%i nota(s) de R$ 10,00\n", num/10);
    num%= 10;

    //nota de 5
    printf("%i nota(s) de R$ 5,00\n", num/5);
    num %= 5;

    //nota de 2
    printf("%i nota(s) de R$ 2,00\n", num/2);
    num %= 2;  

    //nota de 1
    printf("%i nota(s) de R$ 1,00\n", num);
    
    return 0;
}