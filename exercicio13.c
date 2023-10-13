#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometros, milhas;
	printf("Digite a distância, em kilômetros: ");
	scanf("%f", &kilometros);
	milhas = kilometros/1.61;
	printf("Distância: %.1f milhas", milhas);
	return 0;
}
