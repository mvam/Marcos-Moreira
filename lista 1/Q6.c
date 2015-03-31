#include <stdio.h>
#include <stdlib.h>
float tirarMedia (float n1, float n2, float n3, float n4){
	float media = (n1+n2+n3+n4)/4;
	return media;
}

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media = tirarMedia(n1, n2, n3, n4);
	printf("A soma dos números informados foi %.2f", media);
	return 0;
}