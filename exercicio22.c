#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float jardas, metros;
	printf("Digite o peso, em jardas: ");
	scanf("%f", &jardas);
	metros = jardas*0.91;
	printf("Distância: %.2f metros", metros);
	return 0;
}
