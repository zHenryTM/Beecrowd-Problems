#include <stdio.h>

int notas_do_troco(int troco) {
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int notas = 0;
    
    for (int i = 0; i < 6; i++) {
        if (troco >= cedulas[i]) {
            troco %= cedulas[i];
            notas++;
        }
    }
    
    return notas;
}
 
int main() {
    int compra, pago, troco;
    
    while (compra != 0 && pago != 0) {
        scanf("%d %d", &compra, &pago);
        
        if (!compra && !pago) {
            break;
        }
        
        troco = pago - compra;
        
        if ( notas_do_troco(troco) == 2) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }
 
    return 0;
}