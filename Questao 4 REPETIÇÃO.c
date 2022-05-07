#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 4 
	int qntNotas, contadorNotas; 
	float somaNota, media, nota;
	
	printf("Digite a Quantidade de notas da sua turma: ");
	scanf("%i", &qntNotas);
	fflush(stdin);
	
	for(contadorNotas = 0; contadorNotas < qntNotas; contadorNotas++) {
			
		printf("\nDigite a %iª Nota: ", contadorNotas + 1);
		scanf("%f", &nota);
		fflush(stdin);
		
		somaNota += nota;//Zero Kara Tasu zutto tasu
			
	}	
	
	media = somaNota / qntNotas;
	
 	printf("\n--------------------------------\n");
	printf("\nA media Total da turma eh: %.1f\n", media);  
	
	return 0;
}

