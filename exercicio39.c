#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float premio, primeiraFaixa, segundaFaixa, terceiraFaixa;
	printf("\nDigite o valor do prêmio, em R$: ");
	scanf("%f", &premio);
	primeiraFaixa = premio*0.46;
	segundaFaixa = premio*0.32;
	terceiraFaixa = premio-primeiraFaixa-segundaFaixa;
	printf("\nPrêmio da primeira faixa: R$%.2f", primeiraFaixa);
	printf("\nPrêmio da segunda faixa: R$%.2f", segundaFaixa);
	printf("\nPrêmio da terceira faixa: R$%.2f", terceiraFaixa);
	return 0;
}
