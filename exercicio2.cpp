#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero;
	printf("Digite um n�mero real: ");
	scanf("%f", &numero);
	printf("N�mero digitado: %.3f", numero);
	return 0;
}
