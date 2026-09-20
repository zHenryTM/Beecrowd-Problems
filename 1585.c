#include <stdio.h>
 
int main() {
    int casos_teste;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        int x, y;
        
        scanf("%d %d", &x, &y);
        
        printf("%d cm2\n", (x * y) / 2);
    }
 
    return 0;
}
