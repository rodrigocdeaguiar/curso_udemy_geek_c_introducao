#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosQuadrados, hectares;
	printf("Digite a �rea, em hectares: ");
	scanf("%f", &hectares);
	metrosQuadrados = hectares*10000;
	printf("�rea: %.2f m2", metrosQuadrados);
	return 0;
}
