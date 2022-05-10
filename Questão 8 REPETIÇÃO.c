#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 8
	float paisA, paisB, taxaA, taxaB;
	int anos;
	
	paisA = 80000;
	paisB = 200000;
	taxaA = 0.03;
	taxaB = 0.015;
	
	while(paisA <= paisB) {//continua processando ENQUANTO...
		paisA += (paisA * taxaA);
		paisB += (paisB * taxaB);
		anos++;	
	}
	printf("\nPrecisa de %i anos.", anos);
	
	return 0;
}
