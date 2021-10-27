/* Problema - salário */

#include <stdio.h>

int main(){
    
    int n_func, n_hora;
    double sal, v_hora;
    
    //printf("Nº funcionário e horas trabalhadas: ");
    scanf("%d %d", &n_func, &n_hora);
    //printf("Valor hora: ");
    scanf("%lf", &v_hora);
    
    sal = n_hora * v_hora;
   
    printf("NUMBER = %d\n", n_func);
    printf("SALARY = U$ %.2lf\n", sal);
    
    return 0;
}
