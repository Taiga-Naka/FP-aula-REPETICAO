#include <stdio.h>
#include <stdlib.h>

int main (void) {
	/* 4. Construa  um  algoritmo  que leia  um  vetor  de  10  caracteres,
	  e  diga  quantas consoantes foram lidas. Imprima as consoantes.*/
	char texto [10];
	int cont, consoante = 0;//tem q ser 0 pq vai somar mais 1
	
	printf("Digite 10 letras");
	
	for (cont = 0; cont < 10; cont++) {
		printf("\nDigite %i letras: ", cont + 1);
		scanf("%c", &texto [cont]);
		fflush(stdin);
	}
	
	for(cont = 0; cont < 10; cont++) {
		if(texto [cont] != 'a' && texto [cont] != 'e' && texto [cont] != 'i' && texto [cont] != 'o' && texto [cont] != 'u' && texto [cont] != 'A' && texto [cont] != 'E' && texto [cont] != 'I' && texto [cont] != 'O' && texto [cont] != 'U') {
			consoante++;
		} 
	}
	printf("Os consoantes: %i", consoante);
	
	for(cont = 0; cont < 10; cont++) {
		if(texto [cont] != 'a' && texto [cont] != 'e' && texto [cont] != 'i' && texto [cont] != 'o' && texto [cont] != 'u' && texto [cont] != 'A' && texto [cont] != 'E' && texto [cont] != 'I' && texto [cont] != 'O' && texto [cont] != 'U') {
			printf("\nconsoantes: %c", texto [cont]);
		} 
	}
	
	return 0;
}
