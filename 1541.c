// Um dos problemas mais mal elaboradorados do Beecrowd.

// O programa vai dois lados de um retângulo, A e B, e um percentual C.
// O percentual C representa o percentual que a área (A * B) representa.
// Se C for 20, significa que A * B representa 20% da área total. Então,
// você tem descobrir a qual área representa 100% e tirar a raiz dessa nova área
// para descobrir o lado de um quadrado que representa essa área.

#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
        int lado1, lado2, percentual_area, area;
        double lado_quadrado;
        
        scanf("%d", &lado1);
        if (!lado1) break;
        
        scanf("%d %d", &lado2, &percentual_area);
        
        area = lado1 * lado2;
        
        lado_quadrado = (100 * area) / percentual_area;
        lado_quadrado = sqrt(lado_quadrado);
        
        printf("%d\n", (int)lado_quadrado);
    }
 
    return 0;
}
