#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char letraMaiuscula, letraMinuscula;
	printf("Digite uma letra min�scula: ");
	scanf("%c", &letraMinuscula);
	letraMaiuscula=letraMinuscula-32;
	printf("Letra mai�scula: %c", letraMaiuscula);
	return 0;
}
