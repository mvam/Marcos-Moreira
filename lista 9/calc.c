#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilha.h"

typedef struct calc {
	char f[21];
	Pilha* p;
} Calc;

Calc* cria_calc (char* c) {
	Calc* l;
	l = (Calc*)malloc(sizeof(Calc));
	strcpy(l->f,*c);
	l->p = criar();
	return l;
}

void operando (Calc* c, float v) {
	push(c->p->prim, v);
	printf("%f\n", c->p->prim->info);	
	return;
}

void operador (Calc* c, char op) {
	float n2, n1;
	n1 = pop(c->p);
	n2 = c->p->prim->info;
	if(op == '+')
		c->p->prim->info = n2 + n1;
	else
		if(op == '-')
			c->p->prim->info = n2 - n1;
		else
			if(op == '*')
				c->p->prim->info = n2 * n1;
			else
				if(op == '/' && n1 != 0)
					c->p->prim->info = n2 / n1;
				else
					printf("Voce dividio por 0 ou caracter de operacao invalido");
	printf("%f\n", c->p->prim->info);
	return;
}

void libera_calc (Calc* c) {
	libera(c->p);
	free(c);
	return;
}
