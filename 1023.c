#include <stdio.h>
#include <string.h>

int main() {
    int casos_teste;
    int numero_cidade = 1;
    int soma_moradores, soma_consumo;
    int moradores, consumo_total;
    int consumo_medio, maior_indice;
    int moradores_array[201];

    while (1) {
        scanf("%d", &casos_teste);
        if (casos_teste == 0) break;

        soma_moradores = soma_consumo = 0;
        maior_indice = 0;
        memset(moradores_array, 0, sizeof(moradores_array));

        for (int i = 0; i < casos_teste; i++) {
            scanf("%d %d", &moradores, &consumo_total);
            consumo_medio = consumo_total / moradores;
            if (consumo_medio > maior_indice) maior_indice = consumo_medio;
            soma_moradores += moradores;
            soma_consumo += consumo_total;
            moradores_array[consumo_medio] += moradores;
        }

        printf("Cidade# %d:\n", numero_cidade++);
        for (int i = 0; i <= maior_indice; i++) {
            if (moradores_array[i] > 0) {
                printf("%d-%d%c", moradores_array[i], i, i == maior_indice ? '\n' : ' ');
            }
        }

        int media = (int)((float)soma_consumo / soma_moradores * 100);
        printf("Consumo medio: %d.%02d m3.\n\n", media / 100, media % 100);
    }

    return 0;
}
