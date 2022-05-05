#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int idade1, idade2, idade3, idade4, mediaIdade;
	
	printf("Digite a Primeira idade: ");
	scanf("%i", &idade1);
	fflush(stdin);
	printf("Digite a Segunda idade: ");
	scanf("%i", &idade2);
	fflush(stdin);
	printf("Digite a Terceira idade: ");
	scanf("%i", &idade3);
	fflush(stdin);
	printf("Digite a Quarta idade: ");
	scanf("%i", &idade4);
	fflush(stdin);
	
	mediaIdade = (idade1 + idade2 + idade3 + idade4) / 4;
	
	if(mediaIdade >= 0 && mediaIdade <= 150 && mediaIdade != 0) {
		
		if(mediaIdade <= 25) {
			printf("Turma Jovem\n");
			printf("Media : %i", mediaIdade);
		} else if(mediaIdade >= 25 && mediaIdade <= 40) {
			printf("Turma Adulta\n");
			printf("Media : %i", mediaIdade);
		} else if (mediaIdade > 40) {
			printf("Turma Idosa\n");
			printf("Media : %i", mediaIdade);
		}
	} else {
		printf("Digite Certo!!");
	}
	return 0;
}

