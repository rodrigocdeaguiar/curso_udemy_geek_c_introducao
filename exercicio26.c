#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float metrosQuadrados, hectares;
	printf("Digite a �rea, em metros quadrados: ");
	scanf("%f", &metrosQuadrados);
	hectares = metrosQuadrados*0.0001;
	printf("�rea: %.8f ha", hectares);
	return 0;
}
