// Problema 1042  - beecrowd 
//Programa organiza 3 números inteiros em ordem crescente

#include <stdio.h>

int main(){

    int a, b, c, n1, n2, n3;

    //printf("Insira 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    n1 = a;
    n2 = b;
    n3 = c;
    
    if(a < b && b < c){                     //a b c
        printf("%d\n%d\n%d\n", a, b, c);
    }
 
    else if(b < a && a < c){               //b a c
        printf("%d\n%d\n%d\n", b, a, c);
    }

    else if(c < a && a < b){                //c a b
        printf("%d\n%d\n%d\n", c, a, b);
    }

    else if(b < c && c < a){                 //b c a
        printf("%d\n%d\n%d\n", b, c, a);
    }

    else if(c < b && b < a){                // c b a
        printf("%d\n%d\n%d\n", c, b, a);
    }

    else if(a < c && c < b){                 // a c b
        printf("%d\n%d\n%d\n", a, c, b);
    }
 
    printf("\n%d\n%d\n%d\n", n1, n2, n3);  //ordem que nºs foram inseridos

    return 0;
}