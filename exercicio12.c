#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometros, milhas;
	printf("Digite a distância, em milhas: ");
	scanf("%f", &milhas);
	kilometros = milhas*1.61;
	printf("Distância: %.1fkm", kilometros);
	return 0;
}
