#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>


int main (void) {
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);
	
	if(testeNumero(n)) {
		printf("Impar");
	} else {
		printf("Par");
	}	
	
	return 0;
}

int testeNumero (int num) {
	
	if(num % 2 == 0) {
		return 0;
	} else {
		return 1;
	}
}
