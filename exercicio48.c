#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int tempoSeg, horas, minutos, restante;
    printf("Digite um n�mero inteiro positivo de quatro d�gitos: ");
    scanf("%d", &tempoSeg);
    restante=tempoSeg;
    horas=restante/3600;
    restante=(+(restante-(horas*3600)));
    minutos=restante/60;
    restante=(+(restante-(minutos*60)));
    printf("Tempo: %dh, %dmin, %dseg", horas, minutos, restante);
    return 0;
}
