#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometros, milhas;
	printf("Digite a dist�ncia, em kil�metros: ");
	scanf("%f", &kilometros);
	milhas = kilometros/1.61;
	printf("Dist�ncia: %.1f milhas", milhas);
	return 0;
}
