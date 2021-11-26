/* Problema 1061  - becrowd */
/* Programa calcula duração de evento */

#include<stdio.h>

int main(){

    int d_inicio;
    int d_fim; 
    int d_duracao;

    int h_inicio; 
    int h_fim; 
    int h_duracao; 

    int min_inicio; 
    int min_fim;
     int min_duracao;

    int seg_inicio; 
    int seg_fim; 
    int seg_duracao;


    //Inicio
    scanf("Dia %d", &d_inicio);
    scanf("%d : %d : %d\n", &h_inicio, &min_inicio, &seg_inicio);

    //Fim
    scanf("Dia %d", &d_fim);

    scanf("%d : %d : %d", &h_fim, &min_fim, &seg_fim);

    //Total de dias, horas, min e seg
    d_duracao = d_fim - d_inicio;
    h_duracao = h_fim - h_inicio;
    min_duracao = min_fim - min_inicio;
    seg_duracao = seg_fim - seg_inicio;

    //segundo < 0
    if (seg_duracao < 0) {
        seg_duracao += 60;
        min_duracao--;
    }

    //minuto < 0
    if (min_duracao < 0) {
        min_duracao += 60;
        h_duracao--;
    }

    //hora < 0
    if (h_duracao < 0) {
        h_duracao += 24;
        d_duracao--;
    }

    printf("%d dia(s)\n", d_duracao);
    printf("%d hora(s)\n", h_duracao);
    printf("%d minuto(s)\n", min_duracao);
    printf("%d segundo(s)\n", seg_duracao);
  
    return 0;
}