#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 4 perguntar pro sensei
	int qntNotas, contadorNotas, qntInicial; 
	float nota1, nota2, media;
	
	printf("Digite a Quantidade de notas da sua turma: ");
	scanf("%i", &qntNotas);
	fflush(stdin);
	
	for(contadorNotas = qntInicial; contadorNotas <= qntNotas; contadorNotas++) {
			
			printf("\nDigite a Primeira Nota: ");
			scanf("%f", &nota1);
			fflush(stdin);
			printf("\nDigite a Segunda Nota: ");
			scanf("%f", &nota2);
			fflush(stdin);
	}	
			media = (nota1 + nota2) / 2;
	
	 	printf("\n--------------------------------\n");
		printf("\nA media Total da turma eh: %.1f\n", media);
		
	return 0;
}
