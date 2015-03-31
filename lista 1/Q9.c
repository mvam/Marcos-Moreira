#include <stdio.h>
#include <stdlib.h>
float calculaArea (float lado){
	float area = lado*lado;
	return area;
}
float dobraArea (float lado){
	float areaDobrada;
	areaDobrada = calculaArea(lado) * 2;
	return areaDobrada;
}
int main(int argc, char *argv[]) {
	float lado, areaDobrada;
	scanf("%f", &lado);
	areaDobrada = dobraArea(lado);
	printf("O dobro da area do quadrado de lado  %.2f =  %.2f", lado, areaDobrada);
	return 0;
}