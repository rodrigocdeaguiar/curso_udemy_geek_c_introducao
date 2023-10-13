#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int num, originalNum, invertedNum = 0;
    printf("Digite um número positivo de três dígitos: ");
    scanf("%d", &num);
    originalNum = num;
    invertedNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    num /= 10;
    printf("Número original: %d\n", originalNum);
    printf("Número invertido: %d\n", invertedNum);
    return 0;
}
