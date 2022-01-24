//Problema 1435 - beecrownd 
//Programa constrói matriz 

#include<stdio.h>

int main(){

    int i, j, num, aux;

    while(1){
        scanf("%d",&num);
        if( num == 0) {
            break;
        }

        for(i = 1; i <= num; i++){
            for(j = 1; j <= num; j++){
                aux = i;

                if(j < aux){
                    aux = j;
                }

                if(num - i + 1 < aux){
                    aux = num - i + 1;
                }
                
                if(num - j + 1 < aux){
                    aux = num - j + 1;
                }
                printf("%3d",aux);

                if(j < num){
                    printf(" "); 
                } else {
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}