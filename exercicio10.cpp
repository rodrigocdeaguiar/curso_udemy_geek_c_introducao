#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometrosHora, metrosSegundo;
	printf("Digite a velocidade, em Kilômetros por Hora: ");
	scanf("%f", &kilometrosHora);
	metrosSegundo = kilometrosHora/3.6;
	printf("Velocidade: %.1fm/s", metrosSegundo);
	return 0;
}
