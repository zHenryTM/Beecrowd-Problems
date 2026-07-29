#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Diferença de altura de dois canos consecutivos tem que ser, no máximo, a
    // altura do pulo do sapo. O sapo morre de queda!
    
    int altura_pulo, canos, gameover = 0, *altura_canos = NULL;
    
    scanf("%d %d", &altura_pulo, &canos);
    
    altura_canos = (int *)malloc(sizeof(int) * canos);
    if (!altura_canos) exit(1);
    
    for (int i = 0; i < canos; i++) 
        scanf("%d", &altura_canos[i]);
    
    for (int i = 0; i < canos - 1; i++) {
        int cano_atual = altura_canos[i];
        int proximo_cano = altura_canos[i + 1];
        
        if (abs(proximo_cano - cano_atual) > altura_pulo) {
            gameover = 1;
            break;
        }
    }
    
    if (gameover)
        printf("GAME OVER\n");
    else
        printf("YOU WIN\n");
    
    free(altura_canos);
    return 0;
}
