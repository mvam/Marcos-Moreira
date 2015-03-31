#include <stdio.h>
#include <stdlib.h>
float verificarParImpar(int n){
	int result;
	if (n%2==0)
		printf("O numero informado e par!");
	else
		printf("O numero informado e impar!");
}

int main(int argc, char *argv[]) {
	int n;
	printf("Informe o numero: \n");
	scanf("%d", &n);
	verificarParImpar(n);
	return 0;
}