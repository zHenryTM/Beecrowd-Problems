#include <stdio.h>
#include <string.h>

int definir_ganhador(char j1[7], char j2[7])
{
    // ambos escolheram a mesma opção
    if ( !strcmp(j1, j2) )
    {
        if ( !strcmp(j1, "ataque") )
            return -1;
            
        if ( !strcmp(j1, "pedra") )
            return 0;
            
        if ( !strcmp(j1, "papel") )
            return 3;
    }
    
    // opções diferentes
    if ( !strcmp(j1, "papel")  || !strcmp(j2, "ataque") )
        return 2;
        
    if ( !strcmp(j1, "ataque") || !strcmp(j2, "papel") )
        return 1; 
}

int main()
{
    int casos_teste;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++)
    {
        char j1[7], j2[7];
        
        scanf(" %s", j1);
        scanf(" %s", j2);
        
        int ganhador = definir_ganhador(j1, j2);  // -1 - ambos aniquilados
                                                  //  0 - ninguém ganhou
                                                  //  1 - jogador 1 ganhou
                                                  //  2 - jogador 2 ganhou
                                                  //  3 - ambos ganharam
                                                  
        switch (ganhador)
        {
            case -1: 
                printf("Aniquilacao mutua\n");
                break;
            case 0:
                printf("Sem ganhador\n");
                break;
            case 1:
                printf("Jogador 1 venceu\n");
                break;
            case 2:
                printf("Jogador 2 venceu\n");
                break;
            case 3:
                printf("Ambos venceram\n");
                break;
        }
    }

    return 0;
}
