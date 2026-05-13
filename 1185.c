#include <stdio.h>
 
int main() {
 
    float m[12][12], soma = 0.0;
    char operacao;
    scanf("%c", &operacao);
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++) {
            scanf(" %f", &m[i][j]);
            if (i + j < 11) soma += m[i][j];
        }
    if (operacao == 'M') soma /= 66.0;
    printf("%.1f\n", soma);
    return 0;
}
