#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int num, unidade, dezena, centena, milhar;
    printf("Digite um número inteiro positivo de quatro dígitos: ");
    scanf("%d", &num);
    milhar=num/1000;
    printf("\n%d", milhar);
    centena=(num/100)-((num/1000)*10);
    printf("\n%d", centena);
    dezena=(num/10)-((num/100)*10);
    printf("\n%d", dezena);
    unidade=num%10;
    printf("\n%d", unidade);
    return 0;
}
