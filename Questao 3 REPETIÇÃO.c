#include <stdio.h>
#include <stdlib.h>

int main (void) {
	//Questao 3
	int i, num, maior, menor; 
	
	for(i = 0; i < 10; i++) {
	
		printf("Digite o numero %i : ", i + 1);
		scanf("%i", &num);
		fflush(stdin);
		
		if(i == 0) { 
			menor = num; //Se não atribuir valor vai dar "0" (KAKKEKO 50m SOU)
			maior = num;   
		}
		 
		if(num < menor) {
			menor = num;
		} else if(num > maior) {
			maior = num;
		} 
		
		
	}
	printf("numeros menor: %i e maior: %i.", menor, maior);

	return 0;
}
