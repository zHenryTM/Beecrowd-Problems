#include <stdio.h>
int main() {
    int x;
    do {
        scanf("%d", &x);
        if (x == 0) break;
        for (int i = 1; i <= x; i++) {
            if (i == x) printf("%d\n", i);
            else printf("%d ", i);
        }
    } while (x != 0);
    return 0;
}
