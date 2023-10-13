#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometrosHora, metrosSegundo;
	printf("Digite a velocidade, em metros por segundo: ");
	scanf("%f", &metrosSegundo);
	kilometrosHora = metrosSegundo*3.6;
	printf("Velocidade: %.1fkm/h", kilometrosHora);
	return 0;
}
