/* Problema 1051  - beecrowd */
/* Programa calcula imposto de renda */

#include<stdio.h>

int main(){

    float salario, imposto;

    //printf("Informe o salário: ");
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 2000){                 //salário menor que 2.000
         printf("Isento\n");

    } else if (salario >= 2000.1 && salario <= 3000.0) {  //salário até 3.000
        imposto = (salario - 2000.0) * 0.08;
        printf("R$ %.2f\n", imposto);

    } else if (salario >= 3000 && salario <= 4500.0) {   //salário até 4.500
        imposto = ((salario - 3000.0) * 0.18) + 80;
        printf("R$ %.2f\n", imposto);

    } else if (salario > 4500.0) {                      //salário maior que 4.500
        imposto = ((salario - 4500) * 0.28) + 350;
        printf("R$ %.2f\n", imposto);
    }

    return 0;

}