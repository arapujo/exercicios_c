// Problema 1041  - beecrowd 
//Programa mostra quadrante de coordenada

#include <stdio.h>

int main(){

    float x, y;

    //printf("Insira as coordenadas: ");
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0){       //origem 
        printf("Origem\n");
    }

    else if(x == 0){            //eixo y
        printf("Eixo Y\n");
    }

    else if(y == 0){            //eixo x
        printf("Eixo X\n");
    }

    else if(x > 0 && y > 0){     //Q1
        printf("Q1\n");
    }

    else if(x < 0 && y > 0){    //Q2
        printf("Q2\n");
    }

    else if(x < 0 && y < 0){    //Q3
        printf("Q3\n");
    }

    else if(x > 0 && y < 0){    //Q4
        printf("Q4\n");
    }

    return 0;
}