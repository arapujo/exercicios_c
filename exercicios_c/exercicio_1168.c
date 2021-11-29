// Problema 1068  - becrowd 
//Programa calcula qtd de leds para fornar número

//nº:       0 1 2 3 4 5 6 7 8 9
//qtd leds: 6 2 5 5 4 5 6 3 7 6

#include<stdio.h>
#include <string.h>

int main(){

    int n_caso, i, j, qtd_led = 0;

    char num[1001];

    scanf("%d", &n_caso);

    for(i = 0; i < n_caso; i++){
        scanf("%s", num);

        for (j = 0; j < strlen(num); j++){

            if(num[j] == '1'){             //1
                qtd_led+=2;
            }

            else if(num[j] == '2'){        //2
                qtd_led+=5;
            }

            else if(num[j] == '3'){        //3
                qtd_led+=5;
            }

            else if(num[j] == '4'){       //3
                qtd_led+=4;
            }
 
            else if(num[j] == '5'){       //5
                qtd_led+=5;
            }

            else if(num[j] == '6'){       //5
                qtd_led+=6;
            }

            else if(num[j] == '7'){      //7
                qtd_led+=3;
            }

            else if(num[j] == '8'){      //7
                qtd_led+=7;
            }

            else if(num[j] == '9'){      //9
                qtd_led+=6;
            }

            else if(num[j] == '0'){      //0
                qtd_led+=6;
            }
        }

        printf("%d leds\n", qtd_led);

        qtd_led = 0;
    }
    
    return 0;
}