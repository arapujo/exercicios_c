//Problema 1012 - beecrownd
//Programa calcula area de triângulo, círculo, trapézio, quadrado, retângulo

#include<stdio.h>

int main(){

    double a, b, c, a_tri, a_cir, a_tra, a_qua, a_ret;

    scanf("%lf %lf %lf", &a, &b, &c);

    //triângulo
    a_tri = (a * c) / 2;
    printf("TRIANGULO: %.3lf\n", a_tri);

    //círculo
    a_cir = 3.14159 * (c * c);
    printf("CIRCULO: %.3lf\n", a_cir);

    //trapézio
    a_tra = ((a + b) * c) / 2;
    printf("TRAPEZIO: %.3lf\n", a_tra);
    
    //quadrado
    a_qua = b * b;
    printf("QUADRADO: %.3lf\n", a_qua);

    //retângulo
    a_ret = a * b;
    printf("RETANGULO: %.3lf\n", a_ret);

    return 0;
}