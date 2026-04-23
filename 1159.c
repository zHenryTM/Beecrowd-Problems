#include <stdio.h>
 
int main() {
 
    int x, s = 0;
    
    while (1) {
        scanf("%d", &x);
        if (x != 0) {
           for (int i = x; i <= x+9; i++)
                if (i % 2 == 0) s += i;
            printf("%d\n", s);
            s = 0; 
        } else break;
    }
 
    return 0;
}
