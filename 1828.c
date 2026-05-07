#include <stdio.h>
#include <string.h>

int main()
{
    int casos_teste;
    char sheldon[10], raj[10];

    scanf("%d", &casos_teste);

    for (int i = 1; i <= casos_teste; i++)
    {
        scanf("%s %s", sheldon, raj);
        printf("Caso #%d: ", i);

        if ( !strcmp(sheldon, raj) ) printf("De novo!\n");
        else if (
            ( !strcmp(sheldon, "tesoura") && 
                ( !strcmp(raj, "papel") || !strcmp(raj, "lagarto") )) ||

            ( !strcmp(sheldon, "papel") && 
                ( !strcmp(raj, "pedra") || !strcmp(raj, "Spock") )) ||

            ( !strcmp(sheldon, "pedra") && 
                ( !strcmp(raj, "lagarto") || !strcmp(raj, "tesoura") )) ||

            ( !strcmp(sheldon, "lagarto") && 
                ( !strcmp(raj, "Spock") || !strcmp(raj, "papel") )) ||

            ( !strcmp(sheldon, "Spock") && 
                ( !strcmp(raj, "tesoura") || !strcmp(raj, "pedra") ))
        )
        {
            printf("Bazinga!\n");
        }
        else
        {
            printf("Raj trapaceou!\n");
        }
    }

    return 0;
}
