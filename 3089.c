#include <stdio.h>
#include <stdlib.h>

int main() {
    int netos = 1;
    
    while (1)
    {
        int *precos = NULL, maior_soma, menor_soma;
        int inicio = 0, fim;
    
        scanf("%d", &netos);
        if (!netos) break;
        
        precos = calloc(2 * netos, sizeof(int));
        if (!precos) exit(1);
        
        for (int i = 0; i < 2 * netos; i++) 
            scanf("%d", &precos[i]);
            
        fim = 2 * netos - 1;
        
        while (inicio <= fim) {
            int soma = precos[inicio] + precos[fim];
            
            if (!inicio) {
                maior_soma = soma;
                menor_soma = soma;
            } else {
                if (soma > maior_soma)
                    maior_soma = soma;
                else if (soma < menor_soma)
                    menor_soma = soma;
            }    
            
            inicio++;
            fim--;
        }
        
        printf("%d %d\n", maior_soma, menor_soma);
        
        free(precos);
    } 
  
  return 0;
}
