#include <stdio.h>
#include <stdlib.h>

int main (void) {
	/* 5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.*/
	int cont;
	char texto[50][15];//matiz de caractere
	
	for(cont = 0; cont < 15; cont++) {
		printf("Digite %i palavra: ", cont + 1);
		gets(texto[cont]);
		fflush(stdin);
	}
	
	for(cont = 15; cont > 0; cont--) {
		printf("\n%s", texto[cont]);
	}
	
	return 0;
}
