#include <stdio.h>
#define tamanho_vetor 10000
 
int main() {
 
    int casos_teste;
    int numero;
    int numeros_digitados[tamanho_vetor];
    int frequencia;
    
    for (int i = 0; i < tamanho_vetor; numeros_digitados[i] = 0, i++);
    
    scanf("%d", &casos_teste);
 
    for (int i = 0; i < casos_teste; i++) {
        scanf("%d", &numero);
        numeros_digitados[numero] += numero;
    }
    
    for (int i = 0; i < casos_teste; i++) {
        if (numeros_digitados[i] != 0) {
            printf("%d aparece %d vez(es)\n", i, numeros_digitados[i] / i);
        }
    }
    
    return 0;
}
