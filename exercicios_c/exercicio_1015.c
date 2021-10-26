/* Problema 1015 - URI Online Judge */
/* Problema distância entre dois pontos */

#include <stdio.h>
#include <math.h>

int main(){
    
    float x1, x2, y1, y2, d;
    
    printf("Insira o 1º ponto: ");
    scanf("%f %f", &x1, &y1);
    printf("Insira o 2º ponto: ");
    scanf("%f %f", &x2, &y2);
    
    d = sqrt (pow((x2-x1),2) + pow((y2-y1),2));
    
    printf("%.4f\n", d);
    
    return 0;
}
