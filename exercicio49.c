#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int tempoSegExp, horasIni, minutosIni, segundosIni, horasFin, minutosFin, segundosFin, segundosExp;
	printf("\nDigite o horário de início (horas): ");
	scanf("%d", &horasIni);
	printf("\nDigite o horário de início (minutos): ");
	scanf("%d", &minutosIni);
	printf("\nDigite o horário de início (segundos): ");
	scanf("%d", &segundosIni);
	segundosIni = segundosIni+(horasIni*3600)+(minutosIni*60);
	printf("\nDigite o tempo de experiência, em segundos: ");
	scanf("%d", &segundosExp);
	segundosFin=segundosExp+segundosIni;
	horasFin=segundosFin/3600;
    segundosFin=(+(segundosFin-(horasFin*3600)));
    minutosFin=segundosFin/60;
    segundosFin=(+(segundosFin-(minutosFin*60)));
    printf("\nHorário de encerramento: %dh, %dmin, %dseg", horasFin, minutosFin, segundosFin);
    return 0;
}
