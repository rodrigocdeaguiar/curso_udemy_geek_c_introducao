#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioBase, salarioReceber;
	printf("\nDigite o valor do sal�rio, em R$: ");
	scanf("%f", &salarioBase);	
	salarioReceber = salarioBase+(salarioBase*GRATIFICACAO)-(salarioBase*IMPOSTO);
	printf("L�quido a receber: R$%.2f", salarioReceber);
	return 0;
}
