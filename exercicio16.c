#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float polegadas, centimetros;
	printf("Digite a dist�ncia, em polegadas: ");
	scanf("%f", &polegadas);
	centimetros = polegadas*2.54;
	printf("Dist�ncia: %.2f centimetros", centimetros);
	return 0;
}
