#include <stdio.h>
#include <stdlib.h>
float calculaSalario (float salario){
	float salarioFinal = (salario + (salario + (salario*0.05))) - (salario*0.07);
	return salarioFinal;
}

int main(int argc, char *argv[]) {
	float salario, salarioFinal;
	printf("Informe o seu salario: \n");
	scanf("%f", &salario);
	salarioFinal = calculaSalario(salario);
	printf("Seu salario a receber e = %.2f", salarioFinal);
	return 0;
}