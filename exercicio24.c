#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosQuadrados, acres;
	printf("Digite a �rea, em metros quadrados: ");
	scanf("%f", &metrosQuadrados);
	acres = metrosQuadrados*0.000247;
	printf("�rea: %.8f acres", acres);
	return 0;
}
