#include <stdio.h>
#include <stdlib.h>
float aumentaSalario (float salario, float peraumento){
	float salarioFinal = salario + (salario*(peraumento/100));
	return salarioFinal;
}

int main(int argc, char *argv[]) {
	float salario, salarioFinal, peraumento;
	printf("Informe o seu salario: \n");
	scanf("%f", &salario);
	printf("Informe o percentual de aumento do salario: \n");
	scanf("%f", &peraumento);
	salarioFinal = aumentaSalario(salario, peraumento);
	printf("Seu salario agora e = %.2f, houve um aumento de %.2f Porcento = %.2f R$",salarioFinal, peraumento, salarioFinal-salario);
	return 0;
}