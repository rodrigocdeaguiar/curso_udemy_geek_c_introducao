#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero;
	printf("Digite um número real: ");
	scanf("%f", &numero);
	printf("Número digitado: %.3f", numero);
	return 0;
}
