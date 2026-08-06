#include <stdio.h>

int qtd_numeros_na_sequencia(int N) {
    if (N <= 0) return 1;
    return qtd_numeros_na_sequencia(N - 1) + N;
}

void imprimir_sequencia(int N) {
    int x = 1;
    
    printf("0");
    
    while (x <= N) {
        for (int i = 0; i < x; i++)
            printf(" %d", x);
        x++;
    }
    
    printf("\n");
}
 
int main() {
    int N, caso = 1;
    
    while (scanf("%d", &N) != EOF) {
        int qtd_numeros = qtd_numeros_na_sequencia(N - 1) + N;
        
        if (qtd_numeros == 1)
            printf("Caso %d: %d numero\n", caso++, qtd_numeros);
        else 
            printf("Caso %d: %d numeros\n", caso++, qtd_numeros);
        
        imprimir_sequencia(N);
        
        printf("\n");
    }
 
    return 0;
}
