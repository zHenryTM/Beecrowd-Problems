#include <stdio.h>
 
int main() {
    int casos_teste, h, m, o;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        scanf("%d %d %d", &h, &m, &o);
        
        printf("%02d:%02d - %s\n", h, m, o == 1 ? "A porta abriu!" : "A porta fechou!");
    }
 
    return 0;
}
