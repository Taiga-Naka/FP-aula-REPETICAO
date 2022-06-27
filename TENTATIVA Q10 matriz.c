#include <stdio.h>
#include <stdlib.h>

int main (void) {
	/* 10. Construa  um  algoritmo  que  leia  um  vetor  de  20  elementos  e  coloque-os  em ordem crescente.*/
	int cont, j, aux;
	char text[50][10]; 
	
	for(cont = 0; cont < 10; cont++) {
		printf("Digite %i numero: ", cont + 1);
		gets(text[cont]);
		fflush(stdin);
	}
	
	for (cont = 0; cont < 10; cont++) {
		for (j = 0; j < 10; j++) {
			if(text[cont] < text[j]) {
				aux = text[cont];
				text[cont] = text[j];
				text[j] = aux;
			}
		}
	}
	
	printf("Resultado: \n");
	for (cont = 0; cont < 10; cont++) {
		printf("\n%i", text[cont]);
	}
	
	return 0;
}
