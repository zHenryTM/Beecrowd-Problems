#include <stdio.h>
#include <string.h>
 
int main() {
    char numero[11];
    scanf("%s", numero);
    int tamanho_numero = strlen(numero);
    for (int i = tamanho_numero - 1; i >= 0; i--) {
        printf("%c", numero[i]);
    }
    printf("\n");
 
    return 0;
}
