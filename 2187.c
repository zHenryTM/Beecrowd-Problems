#include <stdio.h>
 
int main() {
 
    int valor, casos_teste = 1;
    
    while (1) {
        int qtd_50 = 0, qtd_10 = 0, qtd_5 = 0, qtd_1 = 0;
        
        scanf("%d", &valor);
        
        if (valor == 0) break;
        
        if (valor >= 50) {
            qtd_50 = valor / 50;
            valor %= 50;
        }
        
        if (valor >= 10) {
            qtd_10 = valor / 10;
            valor %= 10;
        }
        
        if (valor >= 5) {
            qtd_5 = valor / 5;
            valor %= 5;
        }
        
        qtd_1 = valor;  // Não precisava, mas quero manter o padrão do código
        
        printf("Teste %d\n", casos_teste);
        
        printf("%d %d %d %d\n\n", qtd_50, qtd_10, qtd_5, qtd_1);
        
        casos_teste++;
    }
 
    return 0;
}
