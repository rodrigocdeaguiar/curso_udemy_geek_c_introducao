#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159265359

int main(){
	setlocale(LC_ALL, "Portuguese");
	float graus, radianos;
	printf("Digite o ângulo, em graus: ");
	scanf("%f", &graus);
	radianos = (graus*pi)/180;
	printf("Ângulo: %.1f radianos", radianos);
	return 0;
}
