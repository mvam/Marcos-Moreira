#include <stdio.h>
#include <math.h>

void soma(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
}

void subtrai(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a-b);
}

void multiplica(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a*b);
}

void divide(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a/b);
}

void raiz(){
	double c;
	scanf("%lf", &c);
	printf("%lf\n", sqrt(c));
}

int main (){
	int a;
	printf("Digite a opção desejada:\n\n");
	printf("1. Somar dois números\n");
	printf("2. Subtrair dois números\n");
	printf("3. Multiplicar dois números\n");
	printf("4. Dividir dois números\n");
	printf("5. Raiz quadrada de um número\n\n");
	scanf("%d", &a);
	switch (a){
		case 1: soma(); break;
		case 2: subtrai(); break;
		case 3: multiplica(); break;
		case 4: divide(); break;
		case 5: raiz(); break;
		default: printf("Você NÃO digitou uma opção válida!\n\n"); break;
	}
	return (0);
}
