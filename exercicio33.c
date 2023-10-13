#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado, area;
	printf("\nDigite o lado do quadrado: ");
	scanf("%f", &lado);
	area = pow(lado, 2);
	printf("\n¡rea: %.2f", area);
	return 0;
}
