#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 3 MATRIZES E VETORES
	float num [10];//zero kara hajimaru kedo, shita no "for" no seide 10 made rimitto
	int cont;
	
	num [1] = 1;
	num [2] = 2;
	num [3] = 3;
	num [4] = 4;
	num [5] = 5;
	num [6] = 6;
	num [7] = 7;
	num [8] = 8;
	num [9] = 9;
	num [10] = 10;
	
	printf("Os numeros sao: ");
	for(cont = 10; cont > 0; cont--) {
		printf("\n%.1f\n", num [cont]);
	}
	
	return 0;
}
