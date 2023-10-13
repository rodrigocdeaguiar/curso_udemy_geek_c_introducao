#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float grauCelsius, grauFahrenheit;
	printf("Digite a temperatura, em graus Fahrenheit: ");
	scanf("%f", &grauFahrenheit);
	grauCelsius = (grauFahrenheit-32)/1.8;
	printf("Temperatura: %.1fºC", grauCelsius);
	return 0;
}
