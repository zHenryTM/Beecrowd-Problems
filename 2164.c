#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    double f, raiz5 = sqrt(5);
    
    scanf("%d", &n);
    
    double q = ( 1 + raiz5 ) / 2;
    double p = ( 1 - raiz5 ) / 2;
    
    q = pow(q, n);
    p = pow(p, n);
    
    f = (q - p) / raiz5;
    
    printf("%.1f\n", f);
 
    return 0;
}
