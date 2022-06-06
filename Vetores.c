#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

int main (void) {
	//Questao 1 MATRIZES E VETORES
	int num [9], cont;
	
	for (cont = 0; cont < tamanho; cont++) {
		printf("Digite os numeros: ");
		scanf("%i", &num [cont]);
		fflush(stdin);
	}
	
	printf("Resultado: %i", num [0] + num [1] + num [2] + num [3] + num [4] + num [5] + num [6] + num [7] + num [8] + num [9]);
	
	return 0;
}
