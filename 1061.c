#include <stdio.h>

int main() {
    int diaInicio, diaFim, hora, minuto, segundo, segundosInicio, segundosFim, duracao;

    scanf("Dia %d", &diaInicio);
    scanf("%d : %d : %d", &hora, &minuto, &segundo);
    segundosInicio = hora * 3600 + minuto * 60 + segundo;

    scanf(" Dia %d", &diaFim);
    scanf("%d : %d : %d", &hora, &minuto, &segundo);
    segundosFim = hora * 3600 + minuto * 60 + segundo;

    duracao = (diaFim - diaInicio) * 86400 + segundosFim - segundosInicio;

    printf("%d dia(s)\n", duracao / 86400);
    duracao %= 86400;
    printf("%d hora(s)\n", duracao / 3600);
    duracao %= 3600;
    printf("%d minuto(s)\n", duracao / 60);
    printf("%d segundo(s)\n", duracao % 60);

    return 0;
}
