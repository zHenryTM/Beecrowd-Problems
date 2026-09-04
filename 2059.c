#include <stdio.h>

int main() {
    int p, j1, j2, r, a;
    
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    
    /*
    CONDIÇÕES DE VITÓRIA PARA O JOGADOR 2
    - R = 1 E A = 1
    - R = 0 E A = 0 E (REGRAS CONVENCIONAIS DO ÍMPAR OU PAR)
    
    CONDIÇÕES DE VITÓRIA PARA O JOGADOR 1
    - R = 1 E A = 0
    - R = 0 E A = 1
    - R = 0 E A = 0 (REGRAS CONVENCIONAIS DO ÍMPAR OU PAR)
    
    REGRAS CONVENCIONAIS DO ÍMPAR OU PAR
    P = 1 E (J1 + J2) % 2 == 0 (JOGADOR 1 VENCE), SENÃO (JOGADOR 2 VENCE)
    P = 1 E (J1 + J2) % 2 == 1 (JOGADOR 2 VENCE), SENÃO (JOGADOR 1 VENCE)
    
    P = 0 E (J1 + J2) % 2 == 0 (JOGADOR 2 VENCE), SENÃO (JOGADOR 1 VENCE)
    P = 0 E (J1 + J2) % 2 == 1 (JOGADOR 1 VENCE), SENÃO (JOGADOR 2 VENCE)
    */
    
    if (r && a) printf("Jogador 2 ganha!\n");
    else if ( (r && !a) || (!r && a) ) printf("Jogador 1 ganha!\n");
    else
        if ( (p && (j1 + j2) % 2 == 0) || (!p && (j1 + j2) % 2 == 1) )
            printf("Jogador 1 ganha!\n");
        else 
            printf("Jogador 2 ganha!\n");
            
    return 0;
}
