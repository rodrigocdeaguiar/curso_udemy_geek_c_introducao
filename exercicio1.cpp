#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um número inteiro: ");
	scanf("%i", &numero);
	printf("Número digitado: %i", numero);
	return 0;
}
