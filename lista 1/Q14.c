#include <stdio.h>
#include <stdlib.h>
float aumentaSalario (float salario){
	float salarioFinal = salario + (salario*0.25);
	return salarioFinal;
}

int main(int argc, char *argv[]) {
	float salario, salarioFinal;
	printf("Informe o seu salario: \n");
	scanf("%f", &salario);
	salarioFinal = aumentaSalario(salario);
	printf("Seu salario agora e = %.2f", salarioFinal);
	return 0;
}