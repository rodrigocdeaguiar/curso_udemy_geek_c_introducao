#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, aumento, salarioFinal;
	printf("\nDigite o sal�rio, em R$: ");
	scanf("%f", &salario);
	printf("\nDigite o percentual de aumento: ");
	scanf("%f", &aumento);
	aumento/=100;
	aumento*=salario;
	salarioFinal=salario+aumento;
	printf("\nSal�rio com aumento: R$%.2f", salarioFinal);
	return 0;
}
