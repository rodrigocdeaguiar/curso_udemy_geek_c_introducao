#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int tempoSegExp, horasIni, minutosIni, segundosIni, horasFin, minutosFin, segundosFin, segundosExp;
	printf("\nDigite o hor�rio de in�cio (horas): ");
	scanf("%d", &horasIni);
	printf("\nDigite o hor�rio de in�cio (minutos): ");
	scanf("%d", &minutosIni);
	printf("\nDigite o hor�rio de in�cio (segundos): ");
	scanf("%d", &segundosIni);
	segundosIni = segundosIni+(horasIni*3600)+(minutosIni*60);
	printf("\nDigite o tempo de experi�ncia, em segundos: ");
	scanf("%d", &segundosExp);
	segundosFin=segundosExp+segundosIni;
	horasFin=segundosFin/3600;
    segundosFin=(+(segundosFin-(horasFin*3600)));
    minutosFin=segundosFin/60;
    segundosFin=(+(segundosFin-(minutosFin*60)));
    printf("\nHor�rio de encerramento: %dh, %dmin, %dseg", horasFin, minutosFin, segundosFin);
    return 0;
}
