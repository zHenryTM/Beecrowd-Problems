#include <stdio.h>
 
int main() {
    /*
        i = j = x/2 = 4 (meio)
        i < j = 3 (diagonal secundária)
        i = j = 2 (diagonal principal)
        x/3 = indice do quadrado com 1
    */
    
    int x;
  
    while (scanf("%d", &x) != EOF) {
        int m[x][x];

        // Preenchendo matriz (ignorando o '1')
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                if (i == x / 2 && j == x / 2) m[i][j] = 4;
                else if (i + j == x - 1) m[i][j] = 3;
                else if (i == j) m[i][j] = 2;
                else m[i][j] = 0;
            }
        }

        // Preenchendo o quadrado com '1'
        for (int i = (x / 3); i <= (x - 1) - (x / 3); i++) {
            for (int j = (x / 3); j <= (x - 1) - (x / 3); j++) {
                if (m[i][j] != 4) m[i][j] = 1;
            }
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}
