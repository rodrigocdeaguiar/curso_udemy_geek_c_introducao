#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define DESCONTO 0.1
#define COMISSAO 0.05

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorCompra, valorPrestacao, valorComDesconto, comissaoVista, comissaoParcelada;
	printf("\nDigite o valor da compra, em R$: ");
	scanf("%f", &valorCompra);
	valorComDesconto = valorCompra-(valorCompra*DESCONTO);
	printf("\nValor a vista, com desconto: R$%.2f", valorComDesconto);
	valorPrestacao = valorCompra/3;
	printf("\nValor da prestação, em 3X: R$%.2f", valorPrestacao);
	comissaoVista = valorComDesconto*COMISSAO;
	printf("\nValor da comissão para compra a vista: R$%.2f", comissaoVista);
	comissaoParcelada = valorCompra*COMISSAO;
	printf("\nValor da comissão para compra parcelada: R$%.2f", comissaoParcelada);
	return 0;
}
