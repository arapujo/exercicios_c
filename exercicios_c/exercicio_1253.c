//Problema 1253 - beecrownd 
//Programa resolve Cifra de César 

#include <stdio.h>

int main(){

    int matriz[100][100], i, j , aux, num;

        while(scanf("%d", &num) != EOF){
            aux = num - 1;

            for(i = 0; i < num; i++){

                for(j = 0;j < num;j++){
                    if(i == j){
                        matriz[i][j]=1;
                    } else {
                        matriz[i][j]=3;
                    }
                    if(j == aux){
                        matriz[i][j]=2;
                    }
                } 

                aux--;
            }
            for(i = 0; i < num; i++){
                for(j = 0;j < num;j++){
                    printf("%d",matriz[i][j]);
                }

                printf("\n");
            }
        }
    
    return 0;
}