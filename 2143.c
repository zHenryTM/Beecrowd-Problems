#include <stdio.h>

int main() {
    int T, N, P;
    
    while (1) {
        scanf("%d", &T);
        
        if (T == 0) {
            break;
        }
    
        for (int i = 0; i < T; i++) {
            scanf("%d", &N);
            
            if (N % 2 == 1) {
                P = 2 * N - 1;
            } else {
                P = 2 * N - 2;
            }
            
            printf("%d\n", P);
        }
    }
}