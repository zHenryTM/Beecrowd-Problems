#include <stdio.h>

int main() {
    int par[5], impar[5], x, cp = 0, ci = 0;
    
    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);
        if(x % 2 != 0) {
            // x é ímpar
            if (ci < 5) impar[ci] = x;
            if (ci++ == 4) {
                int c = 0;
                while (c < 5) {
                    printf("impar[%d] = %d\n", c, impar[c]);
                    impar[c++] = 0;
                }
                ci = 0;
            }
        } else {
            // x é par
            if (cp < 5) par[cp] = x;
            if (cp++ == 4) {
                int c = 0;
                while (c < 5) {
                    printf("par[%d] = %d\n", c, par[c]);
                    par[c++] = 0;
                }
                cp = 0;
            }
        }
    }
    
    for (int i = 0; i < ci; i++)
        if (impar[i] != 0) printf("impar[%d] = %d\n", i, impar[i]);
    
    for (int i = 0; i < cp; i++)
        if (par[i] != 0) printf("par[%d] = %d\n", i, par[i]);
    
    return 0;
}
