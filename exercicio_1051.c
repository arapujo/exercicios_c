#include<stdio.h>
#include<math.h>

int main(){

    float salario, imposto, taxa;

    printf("Informe o salário: ");
    scanf("%f", &salario);
     taxa = (salario / 1000) + (integer(salario) % 1000);
    imposto = salario * 0.08;
     printf("%f\n", imposto);


    //if (salario >= 0 && salario <= 2000){
         //printf("%.2f\n", salario);

    //} else if (salario >= 2000.1 || salario <= 3000) {
        /*taxa = (salario / 1000) + (integer(salario) % 1000);
        imposto = salario * 0.08;
        printf("%f\n", imposto);*/

    /*} else if (salario >= 3000.1 && salario <= 4500) {
        imposto = salario * 0.18;
        printf("%f\n", imposto);

    //} else if (salario > 4500) {
        //imposto = salario - (salario * 0.28);
       // printf("%f\n", imposto);
    }*/

    return 0;

}