#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.141592

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, volume;
	printf("\nDigite o raio do cilindro: ");
	scanf("%f", &raio);
	printf("\nDigite a altura do cilindro: ");
	scanf("%f", &altura);
	volume = PI*pow(raio, 2)*altura;
	printf("\nVolume: %.2f", volume);
	return 0;
}
