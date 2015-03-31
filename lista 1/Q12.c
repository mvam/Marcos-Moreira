#include <stdio.h>
#include <stdlib.h>
float tiraMedia (float n1, float n2, float n3){
	float media = (n1+n2+n3)/3;
	return media;
}

int main(int argc, char *argv[]) {
	float media, n1, n2, n3;
	printf("Informe as tres notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	media = tiraMedia(n1, n2, n3);
	printf("A media das notas e = %.2f", media);
	return 0;
}
