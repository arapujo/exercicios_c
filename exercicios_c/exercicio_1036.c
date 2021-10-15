/* Problema 1036 - URI Online Judge */
/* Programa calcula raízes pela fórmula de Bhaskara */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delt, r1, r2;
    
    //printf("Insira 3 números: ");
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delt = (b*b) - 4 * a * c;
    
    if (delt > 0 && a != 0){
        
        r1 = (-b + sqrt(delt)) / (2*a);
        
        r2 = (-b - sqrt(delt)) / (2*a);
        
        printf("R1 = %.5lf\n", r1);
        
        printf("R2 = %.5lf\n", r2);
       
    } else {
        
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
