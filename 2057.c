#include <stdio.h>
 
int main() {
    int hora_saida, tempo_viagem, fuso_horario, hora_chegada;
    
    scanf("%d %d %d", &hora_saida, &tempo_viagem, &fuso_horario);
    
    hora_chegada = hora_saida + tempo_viagem + fuso_horario;
    
    if (hora_chegada >= 0) {
        if (hora_chegada >= 24)
            hora_chegada -= 24;
    } else hora_chegada = 24 + hora_chegada;
    
    printf("%d\n", hora_chegada);
    
    return 0;
}
