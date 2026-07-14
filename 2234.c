#include <stdio.h>
 
int main() {
    int cachorro_quentes_consumidos, participantes;
    scanf("%d %d", &cachorro_quentes_consumidos, &participantes);
    printf("%.2f\n", (float)cachorro_quentes_consumidos / (float)participantes);
    return 0;
}
