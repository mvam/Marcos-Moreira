#include <stdio.h>
#include <stdlib.h>
float calculaArea (float base, float altura){
	float area = (base*altura)/2;
	return area;
}

int main(int argc, char *argv[]) {
	float base, altura, area;
	printf("Informe o comprimento da base e da altura, respectivamente: \n");
	scanf("%f %f", &base, &altura);
	area = calculaArea(base, altura);
	printf("A area do triangulo e = %.2f", area);
	return 0;
}