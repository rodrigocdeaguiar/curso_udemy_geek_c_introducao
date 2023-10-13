#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float jardas, metros;
	printf("Digite o peso, em metros: ");
	scanf("%f", &metros);
	jardas = metros/0.91;
	printf("Distância: %.2f yd", jardas);
	return 0;
}
