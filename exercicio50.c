#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, anoAtual, anoNascimento;
	printf("\nDigite o ano atual: ");
	scanf("%d", &anoAtual);
	printf("\nDigite a idade: ");
	scanf("%d", &idade);
	anoNascimento = anoAtual-idade;
	printf("\nAno de nascimento: %d", anoNascimento);
	return 0;
}
