#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 7
	int contador;
	float num, multiplicacao;
	
	printf("Digite um Numero: ");
	scanf("%f", &num);
	fflush(stdin);
	
	for(contador = 1; contador <= 10; contador++) {
		
		multiplicacao = num * contador;
	
		printf("\nA tabuada eh: %.1f * %i = %.1f", num, contador, multiplicacao);
			
	}

	return 0;
}
