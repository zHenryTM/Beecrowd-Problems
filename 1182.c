#include <stdio.h>
 
int main() {
 
    int coluna;
    char operacao;
    float m[12][12], soma = 0.0;
    
    scanf("%d", &coluna);
    scanf(" %c", &operacao);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
            if (j == coluna) soma += m[i][j];
        }
    }
    
    if (operacao == 'M') soma /= 12;
    
    printf("%.1f\n", soma);
 
    return 0;
}
