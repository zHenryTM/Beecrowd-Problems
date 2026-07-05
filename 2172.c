#include <stdio.h>
 
int main() {
    int aumento_xp = 1;
    long long xp = 1;
    
    while(aumento_xp != 0 && xp != 0) {
        scanf("%d %lld", &aumento_xp, &xp);
        
        if (!aumento_xp && !xp) break;
        
        xp *= aumento_xp;
        
        printf("%lld\n", xp);
    }
 
    return 0;
}
