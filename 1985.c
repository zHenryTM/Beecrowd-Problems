#include <stdio.h>
 
int main() {
 
    int qtd_compras, qtd_produto;
    int codigo_produto;
    float conta = 0.0;

    scanf("%d", &qtd_compras);
    
    for (int i = 0; i < qtd_compras; i++) {
        scanf("%d %d", &codigo_produto, &qtd_produto);
        switch (codigo_produto) {
            case 1001:
                conta += qtd_produto * 1.5;
                break;
            case 1002:
                conta += qtd_produto * 2.5;
                break;
            case 1003:
                conta += qtd_produto * 3.5;
                break;
            case 1004:
                conta += qtd_produto * 4.5;
                break;
            case 1005:
                conta += qtd_produto * 5.5;
                break;
        }
    }
    
    printf("%.2f\n", conta);
 
    return 0;
}
