/* Problema 1013 URI Online Judge */
/* Problema calcula maior entre 3 nºs */

#include <stdio.h>
#include <math.h>

int main(){
    
    int a, b, c, maior_ab, maior;
    
    //printf("Insira 3 nºs: ");
    scanf("%d %d %d", &a, &b, &c);
    
    maior_ab = (a+b+abs(a-b)) / 2;
    
    if(c > maior_ab){
        maior = c;
    } else {
        maior = maior_ab;
    }
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}
