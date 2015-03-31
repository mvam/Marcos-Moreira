#include <stdio.h>
#include <stdlib.h>
float tiraMedia (float n1, float n2, float n3, int p1, int p2, int p3){
	float media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	return media;
}

int main(int argc, char *argv[]) {
	float media, n1, n2, n3;
	int p1, p2, p3;
	printf("Informe as tres notas: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	printf("Informe os respectivos pesos: \n");
	scanf("%d %d %d", &p1, &p2, &p3);
	media = tiraMedia(n1, n2, n3, p1, p2, p3);
	printf("A media ponderada das notas e = %.2f", media);
	return 0;
}