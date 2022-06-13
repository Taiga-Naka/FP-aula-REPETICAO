#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 7 MATRIZ
	//Construa  um  algoritmo  que  leia  duas  matrizes  5x5e  gere  uma  terceira  matriz com a subtraçãodos elementos correspondentes de a e b.
	
	int matrizA[5][5], matrizB[5][5], matrizC[5][5], linha, coluna;
	//A
	printf("Digite matriz A\n: ");
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			printf("Digite matriz A [%i][%i]: ", linha, coluna);
			scanf("%i", &matrizA[linha][coluna]);
			fflush(stdin);
		}
	}
	//B
	printf("Digite matriz B\n: ");
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			printf("Digite matriz B [%i][%i]: ", linha, coluna);
			scanf("%i", &matrizB[linha][coluna]);
			fflush(stdin);
		}
	}
	//soma
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			matrizC[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
		}
	}

	//saída
	
	printf("Os numeros sao:\n");
	
	printf("\nMatriz A: \n");
	
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			printf("%i\t", matrizA[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\t\t-\n");
	
	printf("\nMatriz B: \n");
	
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			printf("%i\t", matrizB[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\t\t=\n");
	printf("\nResultado: \n");
	
	for (linha = 0; linha < 5; linha++) {
		for (coluna = 0; coluna < 5; coluna++) {
			printf("%i\t", matrizC[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}
