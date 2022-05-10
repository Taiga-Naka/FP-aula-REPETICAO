#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 5
	int numAlunos, contador, qntTurma, somaNumAlunos;
	
	printf("Digite a Quantidade da Turma: ");
	scanf("%i", &qntTurma);
	fflush(stdin);
	
	
	for(contador = 0; contador < qntTurma; contador++) {
		
		printf("\nDigite Quantos Alunos tem em cada Turma? \nTurma %i: ", contador + 1);
		scanf("%i", &numAlunos);
		fflush(stdin);
		
		if(numAlunos >= 40 && numAlunos < 0) {
			somaNumAlunos += numAlunos;
			printf("\nA Media das Turmas eh: %i", somaNumAlunos / qntTurma);
		} else {
			printf("\nDIGITE ATE 40 ALUNOS!!\n E NAO DIGITA QUALQUER COISA!!");
			contador--;
		}
	}	
	
	
	return 0;
} 
	
