#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float polegadas, centimetros;
	printf("Digite a dist�ncia, em cent�metros: ");
	scanf("%f", &centimetros);
	polegadas = centimetros/2.54;
	printf("Dist�ncia: %.2f polegadas", polegadas);
	return 0;
}
