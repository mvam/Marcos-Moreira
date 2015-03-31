#include <stdio.h>
#include <stdlib.h>
int somar (int n1, int n2){
	int soma = n1+n2;
	return soma;
}

int main(int argc, char *argv[]) {
	int n1, n2, soma;
	scanf("%d %d", &n1, &n2);
	soma = somar(n1, n2);
	printf("A soma dos números informados foi %d", soma);
	return 0;
}