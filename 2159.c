#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    double p, m;
    
    scanf("%d", &n);
    
    p = n / log(n);
    m = 1.25506 * p;
    
    printf("%.1f %.1f\n", p, m);
 
    return 0;
}
