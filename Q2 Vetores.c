#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 2 MATRIZES E VETORES
	float num [4];
	int cont;
	
	for (cont = 0; cont < 5; cont++) {
		printf("Digite o %i numero: ", cont + 1);
		scanf("%f", &num [cont]);
		fflush(stdin);
	}
	
	printf("\nMultiplaiacao dos numeros: %.1f", num [0] * num [1] * num [2] * num [3] * num [4]);
	printf("\nSoma dos numeros: %.1f", num [0] + num [1] + num [2] + num [3] + num [4]);
	printf("\nnumeros: %.1f, %.1f, %.1f, %.1f, %.1f", num [0], num [1], num [2], num [3], num [4]);
	
	return 0;
}
