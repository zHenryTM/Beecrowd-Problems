#include <stdio.h>

int lin, col;

int verificar_sabre(int m[lin][col], int x, int y) {
    for (int i = x - 1; i < x + 2; i++) 
        for (int j = y - 1; j < y + 2; j++)
            if (i == x && j == y) continue;
            else if (m[i][j] != 7) return 0;
    return 1;
}

int main() {
    scanf("%d %d", &lin, &col);
    
    int m[lin][col];
    for (int i = 0; i < lin; i++) 
        for (int j = 0; j < col; j++) 
            scanf("%d", &m[i][j]);
        
    for (int i = 1; i < lin; i++) 
        for (int j = 1; j < col; j++) 
            if (m[i][j] == 42) 
                if (verificar_sabre(m, i, j)) {
                    printf("%d %d\n", i + 1, j + 1);
                    return 0;
                }
    
    printf("0 0\n");
}