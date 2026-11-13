//Nome: João Pedro Gallo de Oliveira
//RA: 123931

#include<stdio.h>

int fatorial (int n) {
	if (n == 1 || n == 0) {
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

int main () {
	int n;
	printf ("Esse programa calcula a permutacao de n elementos. Digite o valor de n: \n");
	scanf ("%d", &n);
	printf ("%d\n", fatorial(n));
}