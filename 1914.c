#include <stdio.h>
#include <string.h>
 
int main() {
    int casos_teste;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        char jogadores[4][101], resultado[6];
        int n1, n2, soma;
        
        for (int j = 0; j < 4; j++)
            scanf(" %s", jogadores[j]);
        
        scanf("%d", &n1);
        scanf("%d", &n2);
        
        soma = n1 + n2;
        
        if (soma % 2 == 0)
            strcpy(resultado, "PAR");
        else
            strcpy(resultado, "IMPAR");
        
        if ( !strcmp(resultado, jogadores[1]) ) 
            printf("%s\n", jogadores[0]);
        else 
            printf("%s\n", jogadores[2]);
    }
 
    return 0;
}
