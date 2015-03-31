#include <stdio.h>
#include <stdlib.h>
float pegarMaiorValor (int n1, int n2){
	int maior;
	if (n1 > n2)
		maior = n1;
	if (n2 > n1)
		maior = n2;
	return maior;
}

int main(int argc, char *argv[]) {
	int n1, n2, maior;
	printf("Informe os 2 numeros: \n");
	scanf("%d %d", &n1, &n2);
	maior = pegarMaiorValor(n1, n2);
	printf("O maior numero digitado e = %d", maior);
	return 0;
}