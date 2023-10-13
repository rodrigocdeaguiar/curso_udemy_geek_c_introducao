#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, resultado;
	printf("\nDigite um número inteiro: ");
	scanf("%i", &numero);
	resultado = ((numero*3)+1)+((numero*2)-1);
	printf("\nSoma do sucessor do seu triplo com o antecessor do seu dobro : %i", resultado);
	return 0;
}
