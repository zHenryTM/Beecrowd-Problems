#include <stdio.h>

int somar_dias(int mes) {
    int soma = 0, dias[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i <= mes; i++)
        soma += dias[i];
    return soma;
}

int main() {
    int mes, dias;
    while (scanf("%d %d", &mes, &dias) != EOF) {
        if (mes > 1) {
            int dias_corridos = somar_dias(mes - 2) + dias;
            if (dias_corridos < 359)
                printf("Faltam %d dias para o natal!\n", 360 - dias_corridos);
            else if (dias_corridos == 359)
                printf("E vespera de natal!\n");
            else if (dias_corridos == 360)
                printf("E natal!\n");
            else
                printf("Ja passou!\n");
        } else
            printf("Faltam %d dias para o natal!\n", 360 - dias);
    }
}