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
	printf("\nDigite a altura que voc� deseja subir, em cm: ");
	scanf("%f", &alturaTotal);
	numeroDegraus = alturaTotal/alturaDegrau;
	printf("\nO n�mero total de degraus que precisar�o ser subidos s�o: %i", numeroDegraus);
	return 0;
}
