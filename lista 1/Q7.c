#include <stdio.h>
#include <stdlib.h>
float converteParaCentimetros (float metros){
	float centimetros = metros*100;
	return centimetros;
}

int main(int argc, char *argv[]) {
	float metros, centimetros;
	scanf("%f", &metros);
	centimetros = converteParaCentimetros(metros);
	printf("%.2f metros = %.2f centimetros", metros, centimetros);
	return 0;
}