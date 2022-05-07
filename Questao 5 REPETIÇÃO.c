#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 5
	int numAlunos, contador, qntTurma, media;
	
	printf("Digite a Quantidade da Turma: ");
	scanf("%i", &qntTurma);
	fflush(stdin);
	
	for(contador = qntTurma; contador >= qntTurma; contador++) {
		
		printf("\nDigite Quantos Alunos tem em cada Turma: ");
		scanf("%i", &numAlunos);
		fflush(stdin);
		
		if(numAlunos <= 40) {
			printf("A Media da Turma eh: %i", numAlunos / contador);
			break;
		} else {
			printf("DIGITE ATE 40 ALUNOS!!");
		}
	}

	return 0;
} 
	
