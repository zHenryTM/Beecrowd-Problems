#include <stdio.h>
#include <string.h>

int main() {
    int alunos;
    char matricula[8], matricula_maior_nota[8];
    float nota, maior_nota;
    
    scanf("%d", &alunos);
    
    for (int i = 0; i < alunos; i++ ) {
        scanf(" %s %f", matricula, &nota);
        
        if (i == 0) {
            maior_nota = nota;
            strcpy(matricula_maior_nota, matricula);
        } else if (nota > maior_nota) {
            maior_nota = nota;
            strcpy(matricula_maior_nota, matricula);
        }
        
    }
    
    if (maior_nota < 8) {
        printf("Minimum note not reached\n");
    } else {
        printf(matricula_maior_nota);
        printf("\n");
    }
    
    return 0;
}
