/* Problema 1048  - beecrowd */
/* Programa calcula aumenta de salário */

#include<stdio.h>

int main(){

    float salario, salario_reajustado, reajuste;

    //printf("Insira o salário: ");
    scanf("%f", &salario);
    
    if (salario >= 0 && salario <= 400){
        reajuste = salario * 0.15;
        salario_reajustado = salario + (salario * 0.15);
        printf ("Novo salario: %.2f\n", salario_reajustado);
        printf ("Reajuste ganho: %.2f\n", reajuste);
        printf ("Em percentual: 15 %%\n");
    

       } else if (salario > 0 && salario <= 400){
            reajuste = salario * 0.15;
            salario_reajustado = salario + (salario * 0.15);
            printf ("Novo salario: %.2f\n", salario_reajustado);
            printf ("Reajuste ganho: %.2f\n", reajuste);
            printf ("Em percentual: 15 %%\n");

        } else if (salario > 400.01 && salario <= 800.00){
            reajuste = salario * 0.12;
            salario_reajustado = salario + (salario * 0.12);
            printf ("Novo salario: %.2f\n", salario_reajustado);
            printf ("Reajuste ganho: %.2f\n", reajuste);
            printf ("Em percentual: 12 %%\n");

        } else if (salario > 800.01 && salario <= 1200.00){
            reajuste = salario * 0.10;
            salario_reajustado = salario + (salario * 0.10);
            printf ("Novo salario: %.2f\n", salario_reajustado);
            printf ("Reajuste ganho: %.2f\n", reajuste);
            printf ("Em percentual: 10 %%\n");
        }
        
        else if (salario > 1200.01 && salario <= 2000.00){
            reajuste = salario * 0.07;
            salario_reajustado = salario + (salario * 0.07);
            printf ("Novo salario: %.2f\n", salario_reajustado);
            printf ("Reajuste ganho: %.2f\n", reajuste);
            printf ("Em percentual: 7 %%\n");

    } else {
        reajuste = salario * 0.04;
        salario_reajustado = salario + (salario * 0.04);
        printf ("Novo salario: %.2f\n", salario_reajustado);
        printf ("Reajuste ganho: %.2f\n", reajuste);
        printf ("Em percentual: 4 %%\n");
    }

    return 0;
}