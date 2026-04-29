#include <stdio.h>
 
int main() {
 
    int n, d = 1;
    long long int x;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x);
        while (d <= x) {
            if (d != 1 && d != x && x % d == 0) break;
            d++;
        }
        if (d-1 == x) printf("%lld eh primo\n", x);
        else printf("%lld nao eh primo\n", x);
        d = 1;
    }
 
    return 0;
}
