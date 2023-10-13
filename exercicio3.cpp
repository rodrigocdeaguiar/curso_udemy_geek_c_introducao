#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, numero3, soma;
	printf("Digite um número real: ");
	scanf("%f", &numero1);
	printf("Digite outro número real: ");
	scanf("%f", &numero2);
	printf("Digite outro número real: ");
	scanf("%f", &numero3);
	soma = numero1 + numero2+ numero3;
	printf("Número digitado: %.2f", soma);
	return 0;
}
