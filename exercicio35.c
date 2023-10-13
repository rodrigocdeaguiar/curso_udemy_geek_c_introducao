#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float catA, catB, hipotenusa;
	printf("\nDigite valor do cateto oposto: ");
	scanf("%f", &catA);
	printf("\nDigite valor do cateto adjacente: ");
	scanf("%f", &catB);
	hipotenusa = sqrt(pow(catA,2)+pow(catB,2));
	printf("\nHipotenusa: %.2f", hipotenusa);
	return 0;
}
