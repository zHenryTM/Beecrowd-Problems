#include <stdio.h>
 
int main() {
    int lesmas, mais_rapida;
    while (scanf("%d", &lesmas) != EOF) {
        for (int i = 0; i < lesmas; i++) {
            int velocidade;
            scanf("%d", &velocidade);
            if (i == 0 || velocidade > mais_rapida)
                mais_rapida = velocidade;
        }
        if (mais_rapida < 10) printf("1\n");
        else if (mais_rapida < 20) printf("2\n");
        else printf("3\n");
    }
 
    return 0;
}
