#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &numero);
	printf("N�mero digitado: %i", numero);
	return 0;
}
