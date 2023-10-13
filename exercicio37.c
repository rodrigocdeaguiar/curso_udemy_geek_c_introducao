#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, desconto, valorFinal;
	printf("\nDigite o valor do produto, em R$: ");
	scanf("%f", &valor);
	printf("\nDigite o percentual de desconto: ");
	scanf("%f", &desconto);
	desconto/=100;
	desconto*=valor;
	valorFinal=valor-desconto;
	printf("\nValor Final: R$%.2f", valorFinal);
	return 0;
}
