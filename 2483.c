#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x;
    char *frase = NULL;
    
    scanf("%d", &x);
    
    frase = calloc(12 + x, sizeof(char));
    if (!frase) exit(1);
    
    strcpy(frase, "Feliz nat\0");
    
    for (int i = 0; i < x; i++)
        if (i != x - 1)
            strcat(frase, "a");
        else
            strcat(frase, "al!");
    
    printf("%s\n", frase);
                
    free(frase);
    return 0;
}
