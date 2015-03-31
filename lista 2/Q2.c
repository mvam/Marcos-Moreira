#include <stdio.h>
#include <stdlib.h>
float tiraMedia (float a, float b, float c){
	float media;
	media = (a+b+c)/3;
	return media;
}

float calculaFalta(float media){
	float falta;
	falta = 6 - media;
	return falta;
}

void defineStatus(float media){
	float falta;
	if (media >= 0 && media <3)
		printf("REPROVADO");
	if (media >= 3 && media <7){
		falta = calculaFalta(media);
		printf("EXAME - O aluno precisa de %.2f para alcancar 6.", falta);
	}
	if (media >= 7 && media <=10)
		printf("APROVADO");
}

int main(void)
{
	float a, b, c, media, falta;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	media = tiraMedia(a, b, c);
	printf("A media do aluno foi = %.2f \nO status: ", media);
	defineStatus (media);       
	return 0;
}