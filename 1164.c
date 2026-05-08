#include <stdio.h>
 
int main() {
  
    int casos_teste;
  
    scanf("%d", &casos_teste);
  
    for (int i = 0; i < casos_teste; i++) {
        int x, divisor = 1, soma = 0;
      
        scanf("%d", &x);
      
        while (divisor < x) {
            if (x % divisor == 0) soma += divisor;
            divisor++;
        }
      
        if (soma == x) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }
 
    return 0;
}
