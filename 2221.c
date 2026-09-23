#include <stdio.h>

int calcular_golpe(int ataque, int defesa, int level, int bonus) {
    int golpe = (ataque + defesa) / 2;

    if (level % 2 == 0)
        golpe += bonus;

    return golpe;
}

int main() {
    int casos_teste;
    
    scanf("%d", &casos_teste);

    for (int i = 0; i < casos_teste; i++) {
        int bonus;

        // Valores de Dabriel
        int Ad, Dd, Ld, golpe_dabriel;

        // Valores de Guarte
        int Ag, Dg, Lg, golpe_guarte;

        scanf("%d", &bonus);
        scanf("%d %d %d", &Ad, &Dd, &Ld);
        scanf("%d %d %d", &Ag, &Dg, &Lg);

        golpe_dabriel = calcular_golpe(Ad, Dd, Ld, bonus);
        golpe_guarte = calcular_golpe(Ag, Dg, Lg, bonus);

        if (golpe_dabriel > golpe_guarte)
            printf("Dabriel\n");
        else if (golpe_dabriel < golpe_guarte)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }
}
