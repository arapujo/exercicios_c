/* Sudoku com letras */
/* Programa verifica se Sudoku é válido, através da soma das letras de cada linha de acordo com seu código ASCII*/

#include <stdio.h>
#include <string.h>

int main(){

    int 
        //soma dos elementos das strings
        soma1 = 0,
        soma2 = 0, 
        soma3 = 0,
        soma4 = 0,
        soma5 = 0,
        soma6 = 0,
        soma7 = 0,
        soma8 = 0,
        soma9 = 0,

        //comprimento das strings
        len1, 
        len2,
        len3,
        len4,
        len5,
        len6,
        len7,
        len8,
        len9,

        n,      //quantidade de tabuleiros (9x9)
        c,      //contador
        k = 1;  //número de instâncias

    int i,        
        size = 10, 
        r = 0;
    
    char string1[size] , string2[size], string3[size], string4[size], string5[size], string6[size], string7[size], string8[size], string9[size];

    //lê quantidade de tabuleiros
    scanf("%d", &n);
    fseek(stdin,0,SEEK_END);

  for(c = 0; c < n; c++){

    //linha 1
    gets(string1);

    len1 = strlen(string1);

    for (i = 0; i < len1; i++)

    {
        soma1 = soma1 + string1[i];
    }
    
    //linha 2
    fseek(stdin,0,SEEK_END);
    gets(string2);

     len2 = strlen(string2);

    for (i = 0; i < len2; i++)

    {
        soma2 = soma2 + string2[i];
    }

     //linha 3
    fseek(stdin,0,SEEK_END);
    gets(string3);

    len3 = strlen(string3);

    for (i = 0; i < len3; i++)

    {
        soma3 = soma3 + string3[i];
    }

   //linha 4
    fseek(stdin,0,SEEK_END);
    gets(string4);

    len4 = strlen(string4);

    for (i = 0; i < len4; i++)

    {
        soma4 = soma4 + string4[i];
    }
    
   //linha 5
    fseek(stdin,0,SEEK_END);
    gets(string5);
    
    len5 = strlen(string5);

    for (i = 0; i < len5; i++)

    {
        soma5 = soma5 + string5[i];
    }

    //linha 6
    fseek(stdin,0,SEEK_END);
    gets(string6);

    len6 = strlen(string6);

    for (i = 0; i < len6; i++)

    {
        soma6 = soma6 + string6[i];
    }

    //linha 7
    fseek(stdin,0,SEEK_END);
    gets(string7);

    len7 = strlen(string7);

    for (i = 0; i < len7; i++)

    {
        soma7 = soma7 + string7[i];
    }

    //linha 8
    fseek(stdin,0,SEEK_END);
    gets(string8);

    len8 = strlen(string8);

    for (i = 0; i < len8; i++)

    {
        soma8 = soma8 + string8[i];
    }

    //linha 9
    fseek(stdin,0,SEEK_END);
    gets(string9);

    len9 = strlen(string9);

    for (i = 0; i < len9; i++)

    {
        soma9 = soma9 + string9[i];
    }

     //soma de cada linha
    /*printf("\nSoma dos caracteres string1: %d ", soma1);
    printf("\nSoma dos caracteres string2: %d ", soma2);
    printf("\nSoma dos caracteres string3: %d ", soma3);
    printf("\nSoma dos caracteres string4: %d ", soma4);
    printf("\nSoma dos caracteres string5: %d ", soma5);
    printf("\nSoma dos caracteres string6: %d ", soma6);
    printf("\nSoma dos caracteres string7: %d ", soma7);
    printf("\nSoma dos caracteres string8: %d ", soma8);
    printf("\nSoma dos caracteres string9: %d ", soma9);*/

    //verifica se letras estão todas na mesma sequência
    if(strcmp(string1, string2) == 0){  
        r = 0;
    } else {
        r = 1;
    }

    //imprimi resultado
    printf("Instancia %d\n", k++);
      
    //verifica se soma dos caracteres de cada string corresponde a 877
    if(soma1 == 877 && soma2 == 877 && soma3 == 877 && soma4 == 877 && soma5 == 877 && soma6 == 877 && soma7 == 877 && soma8 == 877 && soma9 == 877 && r == 1){
        printf("SIM\n\n");
    } else {
        printf("NAO\n\n");
    }

    //reseta soma
    soma1 = 0;
    soma2 = 0;
    soma3 = 0;
    soma4 = 0;
    soma5 = 0;
    soma6 = 0;
    soma7 = 0;
    soma8 = 0;
    soma9 = 0;
    
  }

    return 0;
    
}
