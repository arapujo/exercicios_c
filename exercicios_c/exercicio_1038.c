/* Problema 1038 - beecrowd */
/* Programa calcula valor total de lanche */

#include <stdio.h>

int main() {

    int cod, qtd;

    float total;
    
    //printf("Insira o cod e qtd: ");
    
    scanf("%d %d", &cod, &qtd);
    
    switch (cod)
    {
    case 1:
        total = qtd * 4;
        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        total = qtd * 4.5;
        printf("Total: R$ %.2f\n", total );
        break;
    case 3:
        total = qtd * 5;
        printf("Total: R$ %.2f\n", total );
        break;
    case 4:
        total = qtd * 2;
        printf("Total: R$ %.2f\n", total );
        break;
    case 5:
        total = qtd * 1.5;
        printf("Total: R$ %.2f\n", total );
        break;
    }
    
    return 0;
}
