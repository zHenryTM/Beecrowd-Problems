#include <stdio.h>
#include <math.h>
 
int main() {
 
    int v, n;
    scanf("%d %d", &v, &n);
    for(int i = 10; i <= 90; i += 10) {
        if (i != 90)
            printf("%0.lf ", ceil((n*v)*(i/100.0)));
        else
            printf("%0.lf\n", ceil((n*v)*(i/100.0)));
    }
 
    return 0;
}
