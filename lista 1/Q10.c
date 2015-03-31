#include <stdio.h>
#include <stdlib.h>
float calculaSalario (float ganhoHora, int horas){
	float salario = ganhoHora*horas;
	return salario;
}

int main(int argc, char *argv[]) {
	float salario, ganhoHora;
	int horas;
	printf("Quanto voce ganha por hora?");
	scanf("%f", &ganhoHora);
	printf("Quantas horas voce trabalhou este mes?");
	scanf("%d", &horas);
	salario = calculaSalario(ganhoHora, horas);
	printf("O seu salario este mes e =  %.2f", salario);
	return 0;
}