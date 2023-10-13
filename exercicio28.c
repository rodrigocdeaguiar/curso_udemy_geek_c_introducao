#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor1, valor2, valor3, somaQuadrados;
	printf("Digite um número inteiro: ");
	scanf("%i", &valor1);
	printf("Digite outro número inteiro: ");
	scanf("%i", &valor2);
	printf("Digite outro número inteiro: ");
	scanf("%i", &valor3);
	somaQuadrados = pow(valor1, 2) + pow(valor2, 2) + pow(valor3, 2);
	printf("Soma dos quadrado dos valores: %i", somaQuadrados);
	return 0;
}
