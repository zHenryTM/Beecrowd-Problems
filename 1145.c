#include <stdio.h>
 
int main() {
 
    int x, y, c = 1, linebreaker=1;
    scanf("%d %d", &x, &y);
    while(c <= y) {
        if (linebreaker < x) {
            printf("%d ", c);
            linebreaker++;
        } else {
            printf("%d\n", c);
            linebreaker = 1;
        }
        c++;
    }
 
    return 0;
}
