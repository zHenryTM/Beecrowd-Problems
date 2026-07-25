/*
  EXPLICAÇÃO DA TÉCNICA PARA RESOLVER ESSE EXERCÍCIO:

  PARA TRÊS LADOS FORMAREM UM TRIÂNGULO, A SOMA DE DOIS LADOS QUAISQUER SEMPRE TEM QUE SER MAIOR QUE O TERCEIRO LADO. VOCÊ DEVE TESTAR TODAS AS COMBINAÇÕES DE LADOS E VERIFICAR ISSO.
  PORÉM, SE OS LADOS ESTIVEREM ORDENADOS EM ORDEM CRESCENTE, EXEMPLO 3, 5, 6, BASTA FAZER UM ÚNICO TESTE COM OS DOIS PRIMEIROS E VERIFICAR SE ELE É MAIOR QUE O TERCEIRO, COMO EM: 3 + 5 > 6.
  ASSIM, COM APENAS UM TESTE, DESCOBRE-SE QUE ESSES LADOS FORMA UM TRIÂNGULO.

  CONTUDO, COM QUATRO LADOS DISTINTOS, APÓS ORDENAR OS LADOS, A MELHOR FORMA PARA SE DESCOBRIR SE TRÊS DESSES QUATRO LADOS FORMAM UM TRIÂNGULO É VERIFICAR SE A SOMA DOS DOIS MENORES É MAIOR
  QUE O TERCEIRO LADO OU SE A SOMA DOS LADOS DO "MEIO" É MAIOR QUE O ÚLTIMO LADO. 
  
  EXEMPLO:
  LADOS: 2, 7, 9, 10.
  2 + 7 > 9 (FALSO)
  7 + 9 > 10 (VERDADEIRO)

  ASSIM, VOCÊ DESCOBRE QUE TRÊS DESSES QUATRO LADOS PODEM SIM FORMAR UM TRIÂNGULO.
*/

#include <stdio.h>

void quicksort(int n[], int inicio, int fim) {
    if (inicio >= fim) return;
    
    int i, j, pivo = n[fim];
    
    for (i = inicio - 1, j = inicio; j <= fim; j++)
        if (n[j] < pivo || j == fim) {
            int temp = n[j];
            n[j] = n[++i];
            n[i] = temp;
        }
        
    quicksort(n, 0, i - 1);
    quicksort(n, i + 1, fim);
}
 
int main() {
    int n[4];
    
    for (int i = 0; i < 4; i++)
        scanf("%d", &n[i]);
    
    quicksort(n, 0, 3);
    
    if (n[0] + n[1] > n[2] || n[1] + n[2] > n[3])
        printf("S\n");
    else
        printf("N\n");
 
    return 0;
}
