#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilha.h"

int main() {
	Calc* cp;
	int menu = 1;
	float num1, num2;
	char op, f, *p = &f;
	printf("Escreva o formato de impracao da calculadora.\n");
	scanf("%c", p);
	cp = cria_calc(p);
	while(menu != 0){
		printf("Escolha um dos numeros abaixo de acordo com a operacao desejada.\n\n");
		printf("0 : Sair.\n");
		printf("1 : Operacao basica matematica.\n");
		printf("2 : Resetar calculadora.\n");
		scanf("%d", &menu);
		if(menu < 3 && menu > 0)
			switch (menu){
				case 1:
					scanf("%f%f", &num1, &num2);
					operando(cp, num1);
					operando(cp, num2);
					scanf("%c", &op);
					operador(cp, op);
				break;
				
				case 2:
					libera_calc(cp);
					cp = cria_calc(p);
				break;
			}
		else
			printf("Numero invalido\n\n");
	}
	return 0;
}
