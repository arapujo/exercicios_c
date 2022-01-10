// Problema 1871  - beecrowd 
//Programa remove 0 de número

#include <stdio.h>
#include <string.h>

int main(){

	int m, n, i, soma;

	char x[25], y[25];

	while (1) {
		scanf("%d %d", &m, &n);
		soma = m + n;

		if (m == 0 && n == 0) {
			break;
		}
   
		sprintf(x, "%ld", soma);

		for (i = 0; i < strlen(x); i++) {
			if (x[i] != '0') {
				printf("%c", x[i]);
			} else {
				y[i + 1] = '\0';
			}
            
		}
         
		printf("\n");
	}
    
	return 0;
}