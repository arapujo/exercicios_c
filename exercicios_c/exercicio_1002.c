/* Problema 1002 - URI Online Judge */
/* Problema calcula área de círculo */

#include <stdio.h>
#include <math.h>

int main(){
    
    double area, raio;
    
    //printf("Insira o valor do raio: ");
    
    scanf("%lf", &raio);
    
    area = 3.14159 * (pow(raio, 2));
    
    printf("A=%.4lf\n", area);

    return 0;
}
