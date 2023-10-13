#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159265359

int main(){
	setlocale(LC_ALL, "Portuguese");
	float graus, radianos;
	printf("Digite o ângulo, em radianos: ");
	scanf("%f", &radianos);
	graus = (radianos*180)/pi;
	printf("Ângulo: %.1fº", graus);
	return 0;
}
