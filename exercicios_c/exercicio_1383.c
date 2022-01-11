// "SUDOKU" - Problema 1383 - beecrowd 
//Algoritmo verifica por instâncias (3x3) se a solução do SUDOKU é válida

#include <stdio.h>

int main(){
    int n,                    // número de matrizes
        i, j,                 // índices da matriz
        c,                    // iterador
        aux,                  // quadrado dos elementos coluna
        aux_2,                // quadrado dos elementos linha
        k = 0,                // número de instâncias
        r = 0,                // verificador
        quad = 285,           // soma dos quadrados dos elementos (para linha e coluna serem válidas quad = 285)
        matriz[9][9],         // matriz 9x9
        soma_c[9],            // soma da coluna
        soma_l[9],            // soma da linha
        sub_matriz[3][3];     // submatriz 3x3

    // lê quantidade de matrizes que serão verificadas
    scanf("%d", &n);

    for(c = 0; c < n; c++) {
        
      //lê matriz
      for(i = 0; i < 9; i++) {
          for(j = 0; j < 9; j++) { 
            scanf("%d", &matriz[i][j]);
            soma_c[j] = 0;               //zera a soma das colunas
            soma_l[i] = 0;               //zera a soma das linhas
            sub_matriz[i%3][j/3] = 0;    //zera sub matriz
          }
        }

      //verifica linhas, colunas e divide submatriz
        for (i = 0; i < 9; i++) {
          for (j = 0; j < 9; j++) {

            aux = matriz[i][j] * matriz[i][j];      //coluna
            aux_2 = matriz[j][i] * matriz[j][i];    //linha
            soma_c[j] += aux;                       //soma coluna
            soma_l[i] += aux_2;                     //soma linha
            sub_matriz[i/3][j/3] += aux;

            //verifica se 9 linhas e colunas foram lidas e se o quadrado da soma dos elementos linha e coluna são diferente de 285
            if (i == 8 && soma_c[j] != quad && soma_l[i] != quad) {
                r = 1; 
              }
           } 
        }

        //verifica validade de submatriz
        for ( i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
            if (sub_matriz[i][j] != quad) {
              r = 1;
            }
          }
        }

        //incrementa instância
        k++;
        
        //imprimi resultados
        if (r == 0) {
          printf("Instancia %d\n", k);
          printf("SIM\n");
          printf("\n");

        } else {
          printf("Instancia %d\n", k);
          printf("NAO\n");
          printf("\n");
        }

        r = 0;
        
    }
          
    return 0;
}
