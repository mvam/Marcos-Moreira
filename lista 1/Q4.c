#include <stdio.h>
#include <stdlib.h>
int somar (int n1, int n2, int n3, int n4){
	int soma = n1+n2+n3+n4;
	return soma;
}

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, soma;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	soma = somar(n1, n2, n3, n4);
	printf("A soma dos números informados foi %d", soma);
	return 0;
}