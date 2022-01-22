//Problema 1534 - URI Online Judge 
//Programa imprimi matriz variando posição dos números"


#include <stdio.h>

int main(){

    char codigo[50];
    int i, j, x, num;
    
    scanf("%d",&num);

    for(i = 0; i < num; i++){
            scanf("%s",&codigo);
            scanf("%d",&x);
            
            for(j = 0; j < 50; j++){
                    if(codigo[j] == '\0') break;
                    if((codigo[j] - x) < 65) {

                        printf("%c", (codigo[j] - x)+ 26);

                    } else {

                        printf("%c", (codigo[j] - x));
                    }
            }
            printf("\n");        
    }
    
    return 0;
}