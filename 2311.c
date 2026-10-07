#include <stdio.h>
#include <stdlib.h>

typedef struct competidor {
    char nome[50];
    float nota;
} COMPETIDOR;

float max(float v[], int n) {
    float max = v[0];
    for (int i = 1; i < n; i++) 
        if (v[i] > max)
            max = v[i];
    return max;
}

float min(float v[], int n) {
    float min = v[0];
    for (int i = 1; i < n; i++) 
        if (v[i] < min)
            min = v[i];
    return min;
}

float somar_vetor_resultante(float v[], int n, float min, float max) {
    /* O problema exige que a maior e a menor nota sejam desconsiderados da soma das notas */
    float soma = 0;
    for (int i = 0; i < n; i++)
        soma += v[i];
    return soma - min - max;
}

int main() {
    int casos_teste;
    float coeficiente_dificuldade, notas[7], minimo, maximo, nota;
    COMPETIDOR *competidores;

    scanf("%d", &casos_teste);

    competidores = malloc(sizeof(COMPETIDOR) * casos_teste);
    if (!competidores) exit(1);

    for (int i = 0; i < casos_teste; i++) {
        scanf(" %s", competidores[i].nome);
        scanf("%f", &coeficiente_dificuldade);

        for (int j = 0; j < 7; j++)
            scanf("%f", &notas[j]);
        
        minimo = min(notas, 7);
        maximo = max(notas, 7);
        nota = somar_vetor_resultante(notas, 7, minimo, maximo) * coeficiente_dificuldade;

        competidores[i].nota = nota;
    }

    for (int i = 0; i < casos_teste; i++) 
        printf("%s %.2f\n", competidores[i].nome, competidores[i].nota);
    
}
