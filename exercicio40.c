#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define IR 0.08

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorDia, valorJornada;
	int numeroDias;
	printf("\nDigite o valor da diária de trabalho, em R$: ");
	scanf("%f", &valorDia);
	printf("\nDigite o número de dias trabalhados: ");
	scanf("%i", &numeroDias);
	valorJornada=valorDia*numeroDias;
	valorJornada=valorJornada-(valorJornada*IR);
	printf("Valor pago pela jornada de trabalho: R$%.2f", valorJornada);
	return 0;
}
