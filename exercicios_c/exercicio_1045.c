/* Problema 1045 - URI Online Judge */

/* Programa calculo tipo de triângulo */

#include <stdio.h>

int main(){
    
    double a, b, c, aux;
    
    //printf("Insira os lados do triaângulo: ");
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    //classificação crescente de a, b e c
    if(b > a && a > c){ // b maior e c menor
        aux = a;
        a = b;
        b = aux;
    }
    
    if(c > a && a > b){ // c maior e b menor
        aux = a; 
        a = c; 
        c = b; 
        b = aux;
    }
    
    if (a < b && b < c) { // a menor e c maior
        aux = a; 
        a = c; 
        c = aux; 
    }
    
    if (a < c && c < b) { // a menor e b maior
        aux = a; // 0
        a = b; // 3
        b = c;
        c = aux; 
    }
    
    if( a == b && b < c){ //c maior e a e b iguais
        a = c;
        c = b;
    }
    
    if( a == c && b > c){ //b maior e a e c iguais
        a = b;
        b = c;
    }
    
    //classificação do triângulo
    if(a >= b + c){
        
        printf("NAO FORMA TRIANGULO\n");
        
    } else {
    
        if ((a*a) == (b*b) + (c*c)) {
            
            printf("TRIANGULO RETANGULO\n");
            
        } if ((a*a) > (b*b) + (c*c)) {
            
            printf("TRIANGULO OBTUSANGULO\n");
            
        } if ((a*a) < (b*b) + (c*c)) {
            
            printf("TRIANGULO ACUTANGULO\n");
            
        }if (a == b && b == c) {
            
            printf("TRIANGULO EQUILATERO\n");
            
        } if (a == b && b !=c || a == c && c != b || b == c && c != a) {
            
            printf ("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
