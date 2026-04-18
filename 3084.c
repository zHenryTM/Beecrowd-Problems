#include <stdio.h>
 
int main() {
 
    int h, m;
    while(scanf("%d %d", &h, &m) != EOF) {
        printf("%02.0f:%02.0f\n", h/30.0, m/30.0*5);
    }
 
    return 0;
}
