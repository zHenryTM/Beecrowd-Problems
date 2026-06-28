#include <stdio.h>
#include <string.h>
 
int main() {
    int abas, casos_teste;
    
    scanf("%d", &abas);
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        char acao[7];
        
        scanf(" %s", acao);
        
        if (!strcmp(acao, "fechou")) abas++;
        else abas--;
    }
    
    printf("%d\n", abas);
 
    return 0;
}
