#include <stdio.h>
#include <string.h>

int main() {
    int a, b, casos_teste;
    char operacao[10];
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++)
    {
        scanf("%s", operacao);
        
        if ( !strcmp(operacao, "P=NP") )
        {
            printf("skipped\n");
        }
        else
        {
           sscanf(operacao, "%d %d", &a, &b);
           printf("%d\n", a + b);
        }
    }
    
    return 0;
}
