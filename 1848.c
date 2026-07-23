#include <stdio.h>
#include <string.h>
#include <math.h>

int converter_para_binario(char entrada[]) {
    int expoente = 2, binario = 0;
    
    for (int indice = 0; indice < 3; indice++) {
        if (entrada[indice] == '*')
            binario += 1 * (int)pow(2, expoente);
        expoente--;
    }
    
    return binario;
}
 
int main() {
    int gritos = 0, soma = 0;
    
    while (gritos != 3) {
        char entrada[8];
        
        scanf(" %[^\n]", entrada);
        
        if ( !strcmp(entrada, "caw caw") ) {
            printf("%d\n", soma);
            soma = 0;
            gritos++;
        } else {
            int binario = converter_para_binario(entrada);
            soma += binario;
        }
    }
 
    return 0;
}
