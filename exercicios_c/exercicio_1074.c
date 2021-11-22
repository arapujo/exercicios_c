/* Problema 1074 - beecrowd */
/* Programa mostra quais números são pares e ímpares negativos e positivos*/

#include <stdio.h>

int main() {

    int x, i, num;

    //printf("Insira um nº: ");
    scanf("%d", &x);

    for(i=1; i<=x; i++){
        scanf("%d", &num);
        if (num % 2 != 0 && num < 0) {
            printf("ODD NEGATIVE\n");
        }
            else if(num % 2 != 0 && num > 0){
                printf("ODD POSITIVE\n");
            }
            else if(num % 2 == 0 && num > 0){
                printf("EVEN POSITIVE\n");
            }
            else if(num % 2 == 0 && num < 0){
                printf("EVEN NEGATIVE\n");
            }
            else if (num == 0){
            printf("NULL\n");
        }
            
    }
    
    return 0;
}
