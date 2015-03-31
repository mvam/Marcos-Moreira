#include <stdio.h>
#include <stdlib.h>
void Ordena (int a, int b, int c, int d){
	if(d < a)
		printf("%4d%4d%4d%4d\n", d, a, b, c); 
	else if (d < b)
		printf("%4d%4d%4d%4d\n", a, d, b, c); 
	else if (d < c)
		printf("%4d%4d%4d%4d\n", a, b, d, c); 
	else
		printf("%4d%4d%4d%4d\n", a, b, c, d); 
}

int main(void)
{
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("Informe o quarto numero");
	scanf("%d", &d); 
	Ordena(a,b,c,d);         
	return 0;
}