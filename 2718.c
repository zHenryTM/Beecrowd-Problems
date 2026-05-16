#include <stdio.h>
 
int main() {
    int casos_teste;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        long long int numero;
        int lampadas = 0, maior_sequencia = 0;
        
        scanf("%lld", &numero);
        
        while (numero / 2) {
            if (numero % 2) {
                lampadas++;
                if (lampadas > maior_sequencia)
                    maior_sequencia = lampadas;
            }
            else lampadas = 0;
            
            numero /= 2;
        }

        if ((lampadas + 1) > maior_sequencia && numero > 0) 
            maior_sequencia = ++lampadas;
        
        printf("%d\n", maior_sequencia);
    }
 
    return 0;
}
