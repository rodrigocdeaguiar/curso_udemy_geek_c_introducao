#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, antecessor, sucessor;
	printf("\nDigite um número inteiro: ");
	scanf("%i", &numero);
	antecessor = numero-1;
	sucessor = numero+1;
	printf("\nAntecessor: %i", antecessor);
	printf("\nSucessor: %i", sucessor);
	return 0;
}
