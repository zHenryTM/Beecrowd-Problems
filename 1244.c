// ESSE ALGORITMO FICOU MUITO FODA. EU SOU MUITO FODA! COPYRIGHT (C) 2026 HENRIQUE ANGELIN!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int casos_teste;
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        char str[2551], delimitador[] = " ", *token;
        scanf(" %[^\n]", str);
        
        // Pegando quantidade de palavras
        int qtd_palavras = 1;
        for (int j = 0; j < strlen(str); j++) 
            if (str[j] == ' ') qtd_palavras++;
            
        // Preechendo vetor de strings com as palavras
        char palavras[qtd_palavras][51];
        token = strtok(str, delimitador);
        int indice = 0;
        while (token != NULL) {
            strcpy(palavras[indice++], token);
            token = strtok(NULL, delimitador);
        }
        
        // Ordenando
        indice = 1;
        while (indice < qtd_palavras)
            if (indice > 0 && strlen(palavras[indice - 1]) < strlen(palavras[indice])) {
                char temp[51];
                strcpy(temp, palavras[indice - 1]);
                strcpy(palavras[indice - 1], palavras[indice]);
                strcpy(palavras[indice], temp);
                indice--;
            } else indice++;
            
        // Imprimindo
        for (int j = 0; j < qtd_palavras; j++)
            if (j == qtd_palavras - 1) 
                printf("%s\n", palavras[j]);
            else
                printf("%s ", palavras[j]);
    }
    
    return 0;
}
