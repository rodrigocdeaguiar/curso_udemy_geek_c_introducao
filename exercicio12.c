#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float kilometros, milhas;
	printf("Digite a dist�ncia, em milhas: ");
	scanf("%f", &milhas);
	kilometros = milhas*1.61;
	printf("Dist�ncia: %.1fkm", kilometros);
	return 0;
}
