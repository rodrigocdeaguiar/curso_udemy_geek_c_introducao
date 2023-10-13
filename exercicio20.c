#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float quilogramas, libras;
	printf("Digite o peso, em quilogramas: ");
	scanf("%f", &quilogramas);
	libras = quilogramas/0.45;
	printf("Peso: %.2f libras", libras);
	return 0;
}
