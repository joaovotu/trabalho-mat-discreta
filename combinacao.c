#include<stdio.h>

int fatorial (int n) {
	if (n == 1 || n == 0) {
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

int main () {
	int n, k;
	printf ("Esse programa calcula a combinacao de n, tomando k elementos. Digite os numeros n e k: \n");
	scanf ("%d %d", &n, &k);
	if (k > n) {
		printf ("O valor de k nao pode ser maior que o valor de n.\n");
	} else {
	    printf ("%d\n", fatorial(n)/(fatorial(k)*fatorial(n-k)));
    }
}