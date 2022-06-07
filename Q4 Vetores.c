#include <stdio.h>
#include <stdlib.h>

int main (void) {
	/* 4. Construa  um  algoritmo  que leia  um  vetor  de  10  caracteres,
	  e  diga  quantas consoantes foram lidas. Imprima as consoantes.*/
	char texto [10];
	int cont;
	
	for (cont = 0; cont < 10; cont++) {
		printf("Digite %i letra: ", cont + 1);
		scanf("%c", &texto);
		fflush(stdin);
	}
	
	if(texto == 'a' && texto == 'e' && texto == 'i' && texto == 'o' && texto == 'u') {
		
	} else {
		
	}
	
	return 0;
}
