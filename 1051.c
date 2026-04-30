#include <stdio.h>
 
int main() {
 
    float x, i;
    scanf("%f", &x);
    if (x > 2000) {
        if (x <= 3000) i = 0.08 * (x - 2000);
        else if (x <= 4500) i = (0.18 * (x - 3000)) + (0.08 * 1000);
        else i = (0.28 * (x - 4500)) + (0.18 * 1500) + (0.08 * 1000);
        printf("R$ %.2f\n", i);
    } else {
        printf("Isento\n");
    }
 
    return 0;
}
