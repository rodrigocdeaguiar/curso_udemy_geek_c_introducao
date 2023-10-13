#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosCubicos, litros;
	printf("Digite a volume, em litros: ");
	scanf("%f", &litros);
	metrosCubicos = litros/1000;
	printf("Volume: %.2f metros3", metrosCubicos);
	return 0;
}
