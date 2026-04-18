#include <stdio.h>
#include <string.h>
 
int main() {
 
    char grito_jon[1001];
    char grito_medico[1001];
    
    scanf("%s", grito_jon);
    scanf("%s", grito_medico);
    
    if (strlen(grito_medico) > strlen(grito_jon)) printf("no\n");
    else printf("go\n");
 
    return 0;
}
