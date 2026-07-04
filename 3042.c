#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int linhas;
    
    do {
        scanf("%lld", &linhas);
        if (!linhas) break;
        
        int m[linhas][3];
        
        for (int i = 0; i < linhas; i++)
            scanf("%d %d %d", &m[i][0], &m[i][1], &m[i][2]);
            
        int toques = 0, posicao_jogador = 1;
        
        for (int i = -1; i < linhas - 1; i++)
            if (m[i + 1][posicao_jogador] == 1) {
                int nova_posicao;
                
                toques++;
                
                if (m[i + 1][0] == 0) 
                    nova_posicao = 0;
                else if (m[i + 1][1] == 0) 
                    nova_posicao = 1;
                else 
                    nova_posicao = 2;
                    
                if (abs(nova_posicao - posicao_jogador) == 2)
                    toques++;
                
                posicao_jogador = nova_posicao;
            }
            
        printf("%d\n", toques);
    } while (linhas != 0);

    return 0;
}
