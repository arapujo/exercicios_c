// "SUDOKU" - com números de 0 a 9 e apenas o 0 pode repetir
//Algoritmo verifica se a solução do SUDOKU é válida

#include <stdio.h>

int main() {
    int matriz[9][9],     //tabuleiro
        num,              //número de tabuleiros
        c,                //iterador
        k = 0,            //número de instâncias
        r = 0,            //verificador
        i, j,             //índices da matriz
        i_sub, j_sub,     //indíces da submatriz
        i_aux, j_aux,     //indíces linha inicial
        i_final, j_final, //indíces linha submatriz

        //contador de aparição dos números
        cont1 = 0, 
        cont2 = 0, 
        cont3 = 0, 
        cont4 = 0, 
        cont5 = 0, 
        cont6 = 0,
        cont7 = 0, 
        cont8 = 0,
        cont9 = 0;

    //lê quantidade de tabuleiros
    scanf("%d", &num); 

    for (c = 0; c < num; c++) {
        
        //lê matriz
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]); 
            }
        }

        //verifica submatriz
        for (i_sub = 0; i_sub < 9; i_sub++){
            for (j_sub = 0; j_sub < 9; j_sub++) {

                //agrupa colunas e linhas
                if(i_sub >= 0 && i_sub <= 2 && j_sub >= 0 && j_sub <= 2) {  
                    i_aux = 0;
                    j_aux = 0;
                    i_final = 3;
                    j_final = 3;

                } else if(i_sub >= 0 && i_sub <= 2 && j_sub >= 3 && j_sub <= 5){ 
                    i_aux = 0;
                    j_aux = 3;
                    i_final = 3;
                    j_final = 5;

                } else if(i_sub >= 0 && i_sub <= 2 && j_sub >= 6 && j_sub <= 8){
                    i_aux = 0;
                    j_aux = 6;
                    i_final = 3;
                    j_final = 9;

                } else if(i_sub >= 3 && i_sub <= 5 && j_sub >= 0 && j_sub <= 2){
                    i_aux = 3;
                    j_aux = 0;
                    i_final = 6;
                    j_final = 3;

                } else if(i_sub >= 3 && i_sub <= 5 && j_sub >= 3 && j_sub <= 5){
                    i_aux = 3;
                    j_aux = 3;
                    i_final = 6;
                    j_final = 6;

                } else if(i_sub >= 3 && i_sub <= 5 && j_sub >= 6 && j_sub <= 8){
                    i_aux = 3;
                    j_aux = 6;
                    i_final = 6;
                    j_final = 9;

                } else if(i_sub >= 6 && i_sub <= 8 && j_sub >= 0 && j_sub <= 2){
                    i_aux = 6;
                    j_aux = 0;
                    i_final = 9;
                    j_final = 3;

                } else if(i_sub >= 6 && i_sub <= 8 && j_sub >= 3 && j_sub <= 5){
                    i_aux = 6;
                    j_aux = 3;
                    i_final = 9;
                    j_final = 6;
                    
                } else if(i_sub >= 6 && i_sub <= 8 && j_sub >= 6 && j_sub <= 8){
                    i_aux = 6;
                    j_aux = 6;
                    i_final = 9;
                    j_final = 9;
                }

                //verifica se há números repetidos
                for (i = i_aux; i < i_final; i++) {
                    for (j = j_aux; j < j_final; j++) {

                        if(matriz[i][j] == 1) {
                            cont1 = cont1 + 1;

                        } else if(matriz[i][j] == 2) {
                            cont2 = cont2 + 1;

                        } else if(matriz[i][j] == 3) {
                            cont3 = cont3 + 1;

                        } else if(matriz[i][j] == 4) {
                            cont4 = cont4 + 1;

                        } else if(matriz[i][j] == 5) {
                            cont5 = cont5 + 1;
                        }

                        else if(matriz[i][j] == 6) {
                            cont6 = cont6 + 1;
                        }

                        else if(matriz[i][j] == 7) {
                            cont7 = cont7 + 1;
                        }

                        else if(matriz[i][j] == 8) {
                            cont8 = cont8 + 1;
                        }

                        else if(matriz[i][j] == 9) {
                            cont9 = cont9 + 1;
                        }
                    }
                }   

                if (cont1 > 1 || cont2 > 1 || cont3 > 1 || cont4 > 1 || cont5 > 1 || cont6 > 1 || cont7 > 1 || cont8 > 1 || cont9 > 1 ){
                        r = 1;
                    } else {

                        cont1 = 0;
                        cont2 = 0;
                        cont3 = 0;
                        cont4 = 0;
                        cont5 = 0;
                        cont6 = 0;
                        cont7 = 0;
                        cont8 = 0;
                        cont9 = 0;
                }
            }
        }

        //verifica linha
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {

                //verifica se há números repetidos

                 if(matriz[i][j] == 1) {
                    cont1 = cont1 + 1;
                }
                else if(matriz[i][j] == 2) {
                    cont2 = cont2 + 1;
                }
                else if(matriz[i][j] == 3) {
                    cont3 = cont3 + 1;
                }
                else if(matriz[i][j] == 4) {
                    cont4 = cont4 + 1;
                }
                else if(matriz[i][j] == 5) {
                    cont5 = cont5 + 1;
                }
                else if(matriz[i][j] == 6) {
                    cont6 = cont6 + 1;
                }
                else if(matriz[i][j] == 7) {
                    cont7 = cont7 + 1;
                }
                else if(matriz[i][j] == 8) {
                    cont8 = cont8 + 1;
                }
                else if(matriz[i][j] == 9) {
                    cont9 = cont9 + 1;
                }
            }

            if  (cont1 > 1 || cont2 > 1 || cont3 > 1 || cont4 > 1 || cont5 > 1 || cont6 > 1 || cont7 > 1 || cont8 > 1 || cont9 > 1 ){
                r = 1; 

            } else { 
                cont1 = 0;
                cont2 = 0;
                cont3 = 0;
                cont4 = 0;
                cont5 = 0;
                cont6 = 0;
                cont7 = 0;
                cont8 = 0;
                cont9 = 0;
            }
        }
        if (cont1 > 1 || cont2 > 1 || cont3 > 1 || cont4 > 1 || cont5 > 1 || cont6 > 1 || cont7 > 1 || cont8 > 1 || cont9 > 1){
            r = 1;
        } else {
            cont1 = 0;
            cont2 = 0;
            cont3 = 0;
            cont4 = 0;
            cont5 = 0;
            cont6 = 0;
            cont7 = 0;
            cont8 = 0;
            cont9 = 0;
        }

        //verifica coluna
        for (j = 0; j < 9; j++) {
            for (i = 0; i < 9; i++) {

                //verifica se há números repetidos
                
                if(matriz[i][j] == 1) {
                    cont1 = cont1 + 1;
                }
                else if(matriz[i][j] == 2) {
                    cont2 = cont2 + 1;
                }
                else if(matriz[i][j] == 3) {
                    cont3 = cont3 + 1;
                }
                else if(matriz[i][j] == 4) {
                    cont4 = cont4 + 1;
                }
                else if(matriz[i][j] == 5) {
                    cont5 = cont5 + 1;
                }
                else if(matriz[i][j] == 6) {
                    cont6 = cont6 + 1;
                }
                else if(matriz[i][j] == 7) {
                    cont7 = cont7 + 1;
                }
                else if(matriz[i][j] == 8) {
                    cont8 = cont8 + 1;
                }
                else if(matriz[i][j] == 9) {
                    cont9 = cont9 + 1;
                }
            }
            if (cont1 > 1 || cont2 > 1 || cont3 > 1 || cont4 > 1 || cont5 > 1 || cont6 > 1 || cont7 > 1 || cont8 > 1 || cont9 > 1){
                r = 1; 
            } else {

                cont1 = 0;
                cont2 = 0;
                cont3 = 0;
                cont4 = 0;
                cont5 = 0;
                cont6 = 0;
                cont7 = 0;
                cont8 = 0;
                cont9 = 0;
            }
        }
        if (cont1 > 1 || cont2 > 1 || cont3 > 1 || cont4 > 1 || cont5 > 1 || cont6 > 1 || cont7 > 1 || cont8 > 1 || cont9 > 1){
            r = 1;
        } else {
            cont1 = 0;
            cont2 = 0;
            cont3 = 0;
            cont4 = 0;
            cont5 = 0;
            cont6 = 0;
            cont7 = 0;
            cont8 = 0;
            cont9 = 0;
        }

        //incrementa instância
        k++;

        //imprimi resultado
        printf("Instancia %d\n", k);

        if (r == 0) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        } 

        //reseta varíáveis
        r = 0; 
        i_aux = 0; 
        j_aux = 0; 
        i_final = 0; 
        j_final = 0; 
        cont1 = 0; 
        cont2 = 0;
        cont3 = 0;
        cont4 = 0;
        cont5 = 0;
        cont6 = 0;
        cont7 = 0;
        cont8 = 0;
        cont9 = 0;
    
    }

    return 0;
}