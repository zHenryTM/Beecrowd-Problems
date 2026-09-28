#include <stdio.h>

int inverter(int *x, int *y) {
    // Usar quando x < y.
    int z = *x;
    *x = *y;
    *y = z;
}
 
int main() {
    int x, y, xi, yi, m;
    while (scanf("%d %d %d", &x, &y, &m) != EOF) {
        if (x < y) {
            inverter(&x, &y);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &xi, &yi);
            if (xi < yi) {
                inverter(&xi, &yi);
            }
            if (xi <= x && yi <= y) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }
 
    return 0;
}