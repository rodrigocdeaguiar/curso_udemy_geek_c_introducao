#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float grauCelsius, grauKelvin;
	printf("Digite a temperatura, em graus Celsius: ");
	scanf("%f", &grauCelsius);
	grauKelvin = grauCelsius+273.15;
	printf("Temperatura: %.1fK", grauKelvin);
	return 0;
}
