//Problema 1184 - beecrownd
//Programa calcula soma e média de elementos da diagonal principal de uma matriz

#include <stdio.h>

int main(){

    double m[12][12], total;

    char op;

    int i, j , a, b, c;


    scanf("%c", &op);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(a = 1; a <= 11; a++){
        for(b = 0; b <= c; b++){
            total = m[a][b] + total;
        } 
        c++;
    }

    if(op == 'S'){
        printf("%.1lf\n", total);
    } else {
        printf("%.1lf\n", total/66.0);
    }
    
    return 0;
}