#include <stdio.h>
 
int main() {
    int anos;
    
    scanf("%d", &anos);
    
    for (int i = 0; i < anos; i++) {
        long long int ano;
        int resultado;
        scanf("%lld", &ano);
        resultado = 2015 - ano;
        if (resultado > 0)
            printf("%d D.C.\n", resultado);
        else
            printf("%d A.C.\n", resultado * -1 + 1);
    }
 
    return 0;
}
