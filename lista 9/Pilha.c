#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "calc.h"

typedef struct no {
	float info;
	struct no* prox;
} No;

typedef struct pilha {
	No* prim;
} Pilha;

Pilha* criar(void) {
	Pilha* p;
	p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void push (Pilha* p, float v) {
	No* l;
	l = (No*) malloc(sizeof(No));
	l->info = v;
	l->prox = p->prim;
	p->prim = l;
	return;
}

float pop(Pilha* p) {
	float x;
	No* l;
	x = p->prim->info;
	l = p->prim;
	p->prim = p->prim->prox;
	free(l);
	return(x);
}

int vazia (Pilha* p) {
	if(p->prim == NULL)
		return 0;
	else
		return 1;
}

void libera(Pilha* p) {
	float x;
	while(p->prim != NULL)
		x = pop(p);
	return;
}

void imprime (Pilha* p){
	No* l;
	l = p->prim;
	while(l != NULL){
		printf("%f\n", l->info);
		l = l->prox;
	}
}
