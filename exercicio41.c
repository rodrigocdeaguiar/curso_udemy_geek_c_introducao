#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define ADICIONAL 0.1

int main(){
	setlocale(LC_ALL, "Portuguese");
	float horaTrabalhada, valorTotal;
	int numeroHoras;
	printf("\nDigite o valor da hora trabalhada, em R$: ");
	scanf("%f", &horaTrabalhada);
	printf("\nDigite o número de horas trabalhadas: ");
	scanf("%i", &numeroHoras);
	valorTotal=horaTrabalhada*numeroHoras;
	valorTotal=valorTotal+(valorTotal*ADICIONAL);
	printf("Valor pago pela jornada de trabalho: R$%.2f", valorTotal);
	return 0;
}
