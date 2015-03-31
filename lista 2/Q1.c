#include <stdio.h>
#include <stdlib.h>
float tiraMedia (float n1, float n2, float n3, int p1, int p2, int p3){
	float media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	return media;
}
char defineConceito (float media){
	if(media >= 0 && media <=5)
		return 'E';
	if(media > 5 && media <=6)
		return 'D';
	if(media > 6 && media <=7)
		return 'C';
	if(media > 7 && media <=8)
		return 'B';
	if(media > 8 && media <=10)
		return 'A';
}

int main(int argc, char *argv[]) {
	float media, n1, n2, n3;
	char conceito;
	int p1 = 2, p2 = 3, p3 = 5;
	printf("Informe as tres notas: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	media = tiraMedia(n1, n2, n3, p1, p2, p3);
	conceito = defineConceito(media);
	printf("A media ponderada das notas e = %.2f e o conceito %c ", media, conceito);
	return 0;
}