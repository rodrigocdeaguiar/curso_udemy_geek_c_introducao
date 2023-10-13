#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosCubicos, litros;
	printf("Digite a volume, em metros cúbicos: ");
	scanf("%f", &metrosCubicos);
	litros = metrosCubicos*1000;
	printf("Volume: %.2f litros", litros);
	return 0;
}
