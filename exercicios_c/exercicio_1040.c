// Problema 1040  - beecrowd 
//Programa calcula média de notas de aluno

#include <stdio.h>

int main(){

    double n1, n2, n3, n4, n5, media, media_final;

    //printf("Insira as 4 notas: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    printf("Media: %.1f\n", media);

    if(media >= 7.0){                             //aprovado
        printf("Aluno aprovado.\n");
    }

    else if(media >= 5.0){                       //exame
                               
        printf("Aluno em exame.\n");
        //printf("Insira a nota do exame: ");
        scanf("%lf", &n5);
        printf("Nota do exame: %.1f\n", n5);

        media_final = (n5 + media) / 2.0;       //média final

        if(media_final > 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

    printf("Media final: %.1f\n", media_final);

    } else {                                   //reprovado  
        printf("Aluno reprovado.\n");
    }

    return 0;
}