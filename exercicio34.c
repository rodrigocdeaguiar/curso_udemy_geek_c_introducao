#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.141592

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area;
	printf("\nDigite o raio do c�rculo: ");
	scanf("%f", &raio);
	area = PI*(pow(raio, 2));
	printf("\n�rea: %.2f", area);
	return 0;
}
