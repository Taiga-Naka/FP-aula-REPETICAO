#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 9 MATRIZ
	/*Construa  um  algoritmo  que  leia  uma  matriz  quadrada  de  ordem  4.  
	Leia  uma constante K, multiplique a diagonal principal por esta constante e imprima a matriz multiplicada.*/
	 int matriz[4][4], i, j, k;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite matriz [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
			fflush(stdin);
		}	
	}
	
	printf("Digite o valor do K: ");
	scanf("%i", &k);
	fflush(stdin);
	
	for (i = 0; i < 4; i++) {
		matriz[i][i] = matriz[i][i] * k;
	}
	
	printf("\nresultado:\n\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%i\t", matriz[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
