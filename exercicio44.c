#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float alturaTotal, alturaDegrau;
	int numeroDegraus;
	printf("\nDigite a altura de cada degrau, em cm: ");
	scanf("%f", &alturaDegrau);
	printf("\nDigite a altura que você deseja subir, em cm: ");
	scanf("%f", &alturaTotal);
	numeroDegraus = alturaTotal/alturaDegrau;
	printf("\nO número total de degraus que precisarão ser subidos são: %i", numeroDegraus);
	return 0;
}
