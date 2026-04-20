#include <stdio.h>
 
int main() {
 
    int casos_teste, numero;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        scanf("%d", &numero);
        if (numero % 2 == 0) printf("%d\n", 0);
        else printf("%d\n", 1);
    }
    
 
    return 0;
}
