#include <stdio.h>

int converter_para_segundos(char hora[]) {
    int h, m, s;
    sscanf(hora, "%d : %d : %d", &h, &m, &s);
    s += m * 60 + h * 3600;
    return s;
}

int main() {
    int dia_inicio, dia_fim, seg_inicio, seg_fim;
    char dia[10], hora[20];
    
    scanf(" %[^\n]", dia);
    sscanf(dia, "Dia %d", &dia_inicio);
    
    scanf(" %[^\n]", hora);
    seg_inicio = converter_para_segundos(hora);
    
    scanf(" %[^\n]", dia);
    sscanf(dia, "Dia %d", &dia_fim);
    
    scanf(" %[^\n]", hora);
    seg_fim = converter_para_segundos(hora);
 
    // Calculando tempo do evento
    int temp;
    temp = (dia_fim - dia_inicio) * 24 * 3600;
    temp += (seg_fim - seg_inicio);
    
    int d, h, m, s;
    
    d = temp / (3600 * 24);
    temp %= (3600 * 24);
    
    h = temp / 3600;
    temp %= 3600;
    
    m = temp / 60;
    temp %= 60;
    
    s = temp;
    
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    
    return 0;
}
