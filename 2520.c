#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int n, m;
    
    while (scanf("%d %d", &n, &m) != EOF) {
        int cidade[n][m];
        int i_jogador, j_jogador, i_pokemon, j_pokemon;
        int tempo;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &cidade[i][j]);
                if (cidade[i][j] == 1) {
                    i_jogador = i;
                    j_jogador = j;
                } else if (cidade[i][j] == 2) {
                    i_pokemon = i;
                    j_pokemon = j;
                }
            }
        }
        
        tempo = abs(i_jogador - i_pokemon) + abs(j_jogador - j_pokemon);
        
        printf("%d\n", tempo);
    }
    
    return 0;
}
