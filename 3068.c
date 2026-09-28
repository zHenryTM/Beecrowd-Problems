#include <stdio.h>

int main() {
    int x1, y1, x2, y2, teste = 0;

    while (1) {
        int n, meteoros = 0;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;

        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            int x, y;

            scanf("%d %d", &x, &y);

            if ( (x >= x1 && x <= x2) && (y <= y1 && y >= y2) )
                meteoros++;
        }

        printf("Teste %d\n", ++teste);
        printf("%d\n", meteoros);
    }
}
