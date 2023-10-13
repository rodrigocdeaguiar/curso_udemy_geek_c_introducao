#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float grauCelsius, grauFahrenheit;
	printf("Digite a temperatura, em graus Celsius: ");
	scanf("%f", &grauCelsius);
	grauFahrenheit = grauCelsius*1.8+32;
	printf("Temperatura: %.1fºF", grauFahrenheit);
	return 0;
}
