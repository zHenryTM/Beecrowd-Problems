#include <stdio.h>
 
int main() {
 
    double v[100];
    double x;
    
    scanf("%lf", &x);
    
    v[0] = x;
    
    printf("N[0] = %.4f\n", v[0]);
    
    for (int i = 1; i < 100; i++) {
        v[i] = v[i - 1] / 2;
        printf("N[%d] = %.4f\n", i, v[i]);
    }
 
    return 0;
}
