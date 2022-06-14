#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 8 MATRIZ
	/*Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3. 
	 Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  e  imprima  a  matriz multiplicada.*/
	 int matriz[3][3], i, j, k;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite matriz [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
			fflush(stdin);
		}	
	}
	
	printf("Digite o valor do K: ");
	scanf("%i", &k);
	fflush(stdin);
	
	for (i = 0; i < 3; i++) {
		matriz[i][i] = matriz[i][i] - k;
	}
	
	printf("\nresultado:\n\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%i\t", matriz[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
