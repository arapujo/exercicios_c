//Problema 1238 - beecrownd 
//Programa combina duas strings 

#include <stdio.h>
#include<string.h>

int main(){

    int i, j, num, len1, len2, aux ;
    char string1[50], string2[50];

    scanf("%d", &num);
    
    for(i = 0; i < num; i++){

        scanf("%s %s",string1,string2);

        len1 = strlen(string1);
        len2 = strlen(string2);

        if(len1 >= len2) {
            aux = len1;

        } else {
            aux = len2;
        }

        for(j = 0; j < aux; j++){
            if(j < len1){
                printf("%c",string1[j]);
            }
            if(j < len2){
                printf("%c",string2[j]);
            }
        }

        printf("\n");
    }
    
    return 0;
}
