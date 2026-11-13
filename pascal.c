//Nome: João Pedro Gallo de Oliveira
//RA: 123931

#include<stdio.h>

int main(){
	
	int indice, i, j;
	printf ("Esse programa imprime o triangulo de Pascal ate a linha desejada. Digite o indice da linha (comecando em 0): ");
	scanf ("%i", &indice);
	
	int triangulo[indice + 1][indice + 1];

	for (i = 0; i <= indice; i++){
		printf ("Linha %2d: ", i);

		for (j = 0; j <= i; j++){
			if (j == 0 || j == i){
				triangulo[i][j] = 1;
			} else {
				triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
			}
			
			printf ("%10d", triangulo[i][j]);
		}
		printf ("\n");
	}
}
		
	
			
		
		