#include <stdio.h>
#include <stdlib.h>
float calculaArea (float raio){
	float pi = 3.141592;
	float area = pi*(raio*raio);
	return area;
}

int main(int argc, char *argv[]) {
	float raio, area;
	scanf("%f", &raio);
	area = calculaArea(raio);
	printf("A area do circulo = %f", area);
	return 0;
}