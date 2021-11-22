/* Problema 1061  - becrowd */
/* Programa calcula tempo de evento */

#include<stdio.h>

int main(){

    int d_inicio, d_fim, h_inicio, h_fim, min_inicio, min_fim, 
    seg_inicio, seg_fim, d_duracao, h_duracao, min_duracao, seg_duracao;


    //Inicio
    //printf("Dia");
    scanf("%d", &d_inicio);
    //printf("Hora, min e seg de ínicio: ");
    scanf("%d %d %d", &h_inicio, &min_inicio, &seg_inicio);

    //Fim
    //printf("Dia fim: ");
    scanf("%d", &d_fim);
    //printf("\n Hora, min e seg de ínicio:  ");
    scanf("%d %d %d", &h_fim, &min_fim, &seg_fim);

    //Total de dias, horas, min e seg
    d_duracao = d_fim - d_inicio;
    h_duracao = h_fim - h_inicio;
    min_duracao = min_fim - min_inicio;
    seg_duracao = seg_fim  - seg_inicio;


    //segundo < 0
    if (seg_duracao < 0) {
        seg_duracao += 24;
        min_duracao = min_duracao - 1;
    }

    //minuto < 0
    if (min_duracao < 0) {
        min_duracao += 64;
        h_duracao = h_duracao - 1;
    }

    //hora < 0
    if (h_duracao < 0) {
        h_duracao += 24;
        d_duracao = d_duracao - 1;
    }

    printf("%d dia(s)\n", d_duracao);
    printf("%d hora(s)\n", h_duracao);
    printf("%d minuto(s)\n", min_duracao);
    printf("%d segundo(s)\n", seg_duracao);
    
    return 0;
}