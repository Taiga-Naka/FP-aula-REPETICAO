#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 6 MATRIZ
	//Construa  um  algoritmo  que  leia  duas  matrizes  3x3  e  gere  uma  terceira  matriz com a soma dos elementos correspondentes de a e b.
	
	int matrizA[3][3], matrizB[3][3], matrizC[3][3], linha, coluna;
	//A
	printf("Digite matriz A\n: ");
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("Digite matriz A [%i][%i]: ", linha, coluna);
			scanf("%i", &matrizA[linha][coluna]);
			fflush(stdin);
		}
	}
	//B
	printf("Digite matriz B\n: ");
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("Digite matriz B [%i][%i]: ", linha, coluna);
			scanf("%i", &matrizB[linha][coluna]);
			fflush(stdin);
		}
	}
	//soma
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
		}
	}

	//saída
	
	printf("Os numeros sao:\n");
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%i\t", matrizA[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\t+\n");
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%i\t", matrizB[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\t=\n");
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%i\t", matrizC[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}
