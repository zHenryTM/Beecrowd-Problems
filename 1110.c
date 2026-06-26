#include <stdio.h>
#include <stdlib.h>

int main() {
    int *cartas = NULL, qtd_cartas = 1;
    
    while (qtd_cartas) {
        scanf("%d", &qtd_cartas);
        if (!qtd_cartas) break;
        
        cartas = (int *)calloc(qtd_cartas, sizeof(int));
        if (!cartas) exit(1);
        
        // Preenchendo vetor
        for (int i = 0; i < qtd_cartas; i++) 
            *(cartas + i) = i + 1;

        for (int i = 0; i < qtd_cartas - 1; i++) {
            for (int j = i + 1; j < qtd_cartas - 1; j++) {
                int temp = cartas[j];
                cartas[j] = cartas[j + 1];
                cartas[j + 1] = temp;
            }
        }
        
        printf("Discarded cards: ");
        for (int i = 0; i < qtd_cartas - 1; i++) 
            if (i == qtd_cartas - 2)
                printf("%d\n", *(cartas + i));
            else
                printf("%d, ", *(cartas + i));
                
        printf("Remaining card: %d\n", *(cartas + qtd_cartas - 1));
        
        free(cartas);
    }
    
    return 0;
}
