#include <stdio.h>
#include <math.h>

int main() {
    int casos_teste, populacao_A, populacao_B, tempo;
    double crescimento_A, crescimento_B;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        scanf("%d %d %lf %lf", &populacao_A, &populacao_B, &crescimento_A, &crescimento_B);
        tempo = 0;
        while (populacao_A <= populacao_B) {
            populacao_A = (int)floor(populacao_A * (1 + crescimento_A / 100));
            populacao_B = (int)floor(populacao_B * (1 + crescimento_B / 100));
            tempo++;
            if (tempo > 100) break;
        }
        if (tempo > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", tempo);
    }
    
    return 0;
}
