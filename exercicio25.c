#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosQuadrados, acres;
	printf("Digite a área, em acres: ");
	scanf("%f", &acres);
	metrosQuadrados = acres/0.000247;
	printf("Área: %.2f m2", metrosQuadrados);
	return 0;
}
