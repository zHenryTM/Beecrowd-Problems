#include <stdio.h>
#include <math.h>
 
int main() {
 
    double valor;
    double moedas[] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    int notas[] = {100, 50, 20, 10, 5, 2};
    int qtd_notas, qtd_moedas;
    
    scanf("%lf", &valor);

    int total = (int)(valor * 100 + 0.5);
    
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtd_notas = total / (notas[i] * 100);
        total %= (notas[i] * 100);
        printf("%d nota(s) de R$ %d.00\n", qtd_notas, notas[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int moeda_cent = (int)(moedas[i] * 100);
        qtd_moedas = total / moeda_cent;
        total %= moeda_cent;
        printf("%d moeda(s) de R$ %.2f\n", qtd_moedas, moedas[i]);
    }
    
    return 0;
}
