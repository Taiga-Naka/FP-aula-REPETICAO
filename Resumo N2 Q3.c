#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int contador;
	float media, notas, soma; 
	
	for(contador = 0; contador < 6; contador++) {
		printf("\nDigite a %i nota: ", contador + 1);
		scanf("%f", &notas);
		fflush(stdin);
		
		soma += notas;
		
	}
	
	media = soma / contador;
	
	if(notas >= 0 && notas <= 10) {
		
		if(notas >= 6) {
			printf("\nAprovado.\n");
			printf("\nNo entanto, a sua media eh: %.1f", media);
		} else {
			printf("Reprovado. estude mais");
		}
		
	} else {
		printf("Erro, digite certo.");
	}
	
	return 0;
}
