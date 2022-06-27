#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>


int main (void) {
	char texto;
	int quantidade;
	
	printf("Digite o caracter: ");
	scanf("%c", &texto);
	fflush(stdin);
	printf("Digite a quantidade de linhas: ");
	scanf("%i", &quantidade);
	
	imprime(texto, quantidade);
	
	return 0;
}

void imprime(char caracter, int linha) {
	
	int i, j;
	
	for (j = 1; j <= linha; j++) {
		for (i = 1; i <= 79; i++) {
			printf("%c", caracter);
		}	
	}
	printf("\n");
	
	
}



