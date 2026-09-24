#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int v[n], w[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    w[0] = 0;
    
    for (int i = 1; i < n; i++) {
        w[i] = (v[i - 1] < v[i]) ? 1 : -1 ;
        
        if (v[i - 1] == v[i]) {
            printf("0\n");
            return 0;
        }
    }
    
    for (int i = 1; i < n; i++) {
        int s = w[i - 1] + w[i];
        
        if (s > 1) {
            printf("0\n");
            return 0;
        } else if (s < -1) {
            printf("0\n");
            return 0;
        }
    }
    
    printf("1\n");
    return 0;
}  