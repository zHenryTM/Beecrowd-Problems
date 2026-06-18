#include <stdio.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b) printf("%d\n", a);
    else {
        int m;
        if (a > b) m = a;
        else m = b;
        printf("%d\n", m);
    }
 
    return 0;
}
