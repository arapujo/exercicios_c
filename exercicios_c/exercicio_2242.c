//Problema 2242 - beecrownd 
//Programa calcula se risada é engraçada ou não

#include <stdio.h>
#include <string.h>

int main(){

    char risada[60], aux2[60];
    int i, j = 0, aux;
    
    scanf("%s", risada);

    for(i = 0; risada[i]; i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            aux2[j] = risada[i];
            j++;
        }
    }

    aux2[j] = '\0';

    aux = strlen(aux2);
    
    for(i = 0, j = aux-1; i < aux; i++, j--){
        if(aux2[i] != aux2[j]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}