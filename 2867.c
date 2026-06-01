#include <stdio.h>
#include <math.h>
 
int main() {
    int casos_teste, n, m;
    scanf("%d", &casos_teste);
    for (int i = 0; i < casos_teste; i++) {
        int digitos;
        scanf("%d %d", &n, &m);
        digitos = m * log10(n) + 1;
        printf("%d\n", digitos);
    }
    return 0;
}
