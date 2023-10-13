#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero, divisao;
	printf("Digite um número real: ");
	scanf("%f", &numero);
	divisao = numero/5;
	printf("Resultado da quinta parte do número digitado: %.2f", divisao);
	return 0;
}
