#include <stdio.h>
#include <string.h>

int main() {
    char frase1[101];
    char frase2[101];
    char frase3[101];
    
    char saida1[202];
    char saida2[202];
    char saida3[202];
    char saida4[202];
    
    fgets(frase1, 101, stdin);
    fgets(frase2, 101, stdin);
    fgets(frase3, 101, stdin);
    
    // fgets() inclui \n na string, isso prejudica a saída
    frase1[strcspn(frase1, "\n")] = '\0';
    frase2[strcspn(frase2, "\n")] = '\0';
    frase3[strcspn(frase3, "\n")] = '\0';
    
    // ORDEM DE CONCATENAÇÃO DAS FRASES
    // frase1-frase2-frase3
    // frase2-frase3-frase1
    // frase3-frase1-frase2
    // frase1-frase2-frase3 (10 caracteres)
    
    sprintf(saida1, "%s%s%s", frase1, frase2, frase3);
    sprintf(saida2, "%s%s%s", frase2, frase3, frase1);
    sprintf(saida3, "%s%s%s", frase3, frase1, frase2);
    sprintf(saida4, "%.10s%.10s%.10s", frase1, frase2, frase3);
    
    printf("%s\n", saida1);
    printf("%s\n", saida2);
    printf("%s\n", saida3);
    printf("%s\n", saida4);
    
    return 0;
}
