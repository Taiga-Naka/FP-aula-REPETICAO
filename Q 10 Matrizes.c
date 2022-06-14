#include <stdio.h>
#include <stdlib.h>

int main (void) {
	/* 10. Construa  um  algoritmo  que  leia  um  vetor  de  20  elementos  e  coloque-os  em ordem crescente.*/
	int cont, num[20], j, aux;
	
	for(cont = 0; cont < 20; cont++) {
		printf("Digite %i numero: ", cont + 1);
		scanf("%i" ,&num[cont]);
		fflush(stdin);
	}
	
	for (cont = 0; cont < 20; cont++) {
		for (j = 0; j < 20; j++) {
			if(num[cont] < num[j]) {
				aux = num[cont];
				num[cont] = num[j];
				num[j] = aux;
			}
		}
	}
	
	printf("Resultado: \n");
	for (cont = 0; cont < 20; cont++) {
		printf("\n12%i", num[cont]);
	}
	
	return 0;
}
