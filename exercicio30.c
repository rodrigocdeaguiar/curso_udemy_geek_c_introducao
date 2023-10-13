#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorReal, cotacaoDolar, valorDolar;
	printf("Digite o valor, em R$: ");
	scanf("%f", &valorReal);
	printf("Digite a cotação do dólar (US$): ");
	scanf("%f", &cotacaoDolar);
	valorDolar = valorReal/cotacaoDolar;
	printf("Valor convertido: US$%.2f", valorDolar);
	return 0;
}
