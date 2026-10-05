#include <stdio.h>
#include <stdlib.h>

int main() {
    int testes, *rotacoes, rotacao, indice = 0;
    
    scanf("%d", &testes);
    
    rotacoes = malloc(sizeof(int) * testes);
    if (!rotacoes) exit(1);
    
    for (int i = 0; i < testes; i++) 
        scanf("%d", &rotacoes[i]);
        
    for (int i = 1; i < testes; i++) {
        int anterior = rotacoes[i - 1];
        int atual = rotacoes[i];
        
        if (atual < anterior) {
            indice = i + 1;
            break;
        }
    }  
    
    printf("%d\n", indice);
}