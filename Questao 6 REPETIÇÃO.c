#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 6

	int cdQnt, cadaCD, contador;
	float somaCD;
	
	printf("Informe a Quantidade de CDs: ");
	scanf("%i", &cdQnt);
	fflush(stdin);
	
	for(contador = 0; contador < cdQnt; contador++) {
		printf("\nDigite o Valor do %i CD: ", contador + 1);
		scanf("%i", &cadaCD);
		fflush(stdin);
		
		somaCD += cadaCD;
	}
	
	printf("\nO Valor Total de CD eh: R$%.2f", somaCD);
	printf("\nO Media total do custo do CD eh: R$%.2f", somaCD / cdQnt);

	return 0;
} 
