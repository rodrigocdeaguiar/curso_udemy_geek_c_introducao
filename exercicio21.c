#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float quilogramas, libras;
	printf("Digite o peso, em libras: ");
	scanf("%f", &libras);
	quilogramas = libras*0.45;
	printf("Peso: %.2f quilogramas", quilogramas);
	return 0;
}
