#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char letraMaiuscula, letraMinuscula;
	printf("Digite uma letra minúscula: ");
	scanf("%c", &letraMinuscula);
	letraMaiuscula=letraMinuscula-32;
	printf("Letra maiúscula: %c", letraMaiuscula);
	return 0;
}
