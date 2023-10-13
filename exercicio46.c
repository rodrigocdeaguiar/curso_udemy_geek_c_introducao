#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int num, originalNum, invertedNum = 0;
    printf("Digite um n�mero positivo de tr�s d�gitos: ");
    scanf("%d", &num);
    originalNum = num;
    invertedNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    num /= 10;
    printf("N�mero original: %d\n", originalNum);
    printf("N�mero invertido: %d\n", invertedNum);
    return 0;
}
