#include <stdio.h>
int main() {
    int reclamacoes;
    while (scanf("%d", &reclamacoes) != EOF) {
        if (reclamacoes) printf("vai ter duas!\n");
        else printf("vai ter copa!\n");
    }
    return 0;
}
