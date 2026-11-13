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

int arranjo (int n, int k) {
	return fatorial(n)/fatorial(n-k);
}

int combinacao (int n, int k) {
	return fatorial(n)/(fatorial(k)*fatorial(n-k));
}

int main () {
	int opcao, n, k;
	printf("\n==============================\n");
    printf("   CALCULADORA COMBINATORIA\n");
    printf("==============================\n");
    printf("1. Permutacao\n");
    printf("2. Arranjo\n");
    printf("3. Combinacao\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			printf("Digite o valor de n: ");
			scanf("%d", &n);
			printf("O resultado da permutacao de %d elementos eh: %d\n", n, fatorial(n));
			break;
		case 2:
			printf("Digite os valores de n e k: ");
			scanf("%d %d", &n, &k);
			if (k > n) {
				printf("O valor de k nao pode ser maior que o valor de n.\n");
			} else {
				printf("O resultado do arranjo de %d elementos tomando %d eh: %d\n", n, k, arranjo(n, k));
			}
			break;
		case 3:
			printf("Digite os valores de n e k: ");
			scanf("%d %d", &n, &k);
			if (k > n) {
				printf("O valor de k nao pode ser maior que o valor de n.\n");
			} else {
				printf("O resultado da combinacao de %d elementos tomando %d eh: %d\n", n, k, combinacao(n, k));
			}
			break;
		case 0:
			printf("Saindo do programa...\n");
			break;
		default:
			printf("Opcao invalida. Tente novamente.\n");
	}
}