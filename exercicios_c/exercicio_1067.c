/* Problema 1067 - beecrowd */
/* Programa mostra números ímpares até x */

#include <stdio.h>

int main() {

    int x, i;

    //printf("Insira um nº: ");
    scanf("%d", &x);

    for(i=1; i<=x; i++){
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
