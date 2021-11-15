/* Problema 1061  - becrowd */
/* Programa calcula tempo de evento */

#include<stdio.h>

int main(){

    int d_inicio, d_fim, h_inicio, h_fim, min_inicio, min_fim, 
    seg_inicio, seg_fim, d_duracao, h_duracao;

    printf("Dia ");
    scanf("%d", &d_inicio);
    printf(" : :  : ");
    scanf("%d %d %d", &h_inicio, &min_inicio, &seg_inicio);

    printf("Dia \n");
    scanf("%d", &d_fim);
    printf(" : :  : ");
    scanf("%d %d %d", &h_fim, &min_fim, &seg_fim);

    d_duracao = d_fim - d_inicio;
    h_duracao = h_fim - h_inicio;



    printf("%d", d_duracao);

    


    return 0;
}