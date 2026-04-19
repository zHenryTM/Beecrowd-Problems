#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    char s[n+1];
    scanf("%s", s);
    
    int p, m, g;
    scanf("%d %d %d", &p, &m, &g);
    
    int muralhas[n];
    for (int i = 0; i < n; muralhas[i] = x, i++);
    
    int ip = 0, im = 0, ig = 0;
    
    int muros;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'P') {
            while (1) {
                if (muralhas[ip] >= p) {
                    muralhas[ip] -= p;
                    break;
                }
                ip++;
            }
        } else if (s[i] == 'M') {
            while (1) {
                if (muralhas[im] >= m) {
                    muralhas[im] -= m;
                    break;
                }
                im++;
            }
        } else {
            while (1) {
                if (muralhas[ig] >= g) {
                    muralhas[ig] -= g;
                    break;
                }
                ig++;
            }
        }
    }
    
    if (ip > im) {
        muros = ip;
    } else {
        muros = im;
    }
    
    if (muros < ig) {
        muros = ig;
    }
    
    printf("%d\n", muros+1);
    
    return 0;
}
