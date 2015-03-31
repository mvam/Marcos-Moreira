#include <stdio.h>
#include <stdlib.h>
float converteParaCelsius (float F){
	float C = (F - 32)/1.8;
	return C;
}

int main(int argc, char *argv[]) {
	float F, C;
	scanf("%f", &F);
	C = converteParaCelsius(F);
	printf("%.2f Fahrenheit = %.2f Celsius", F, C);
	return 0;
}