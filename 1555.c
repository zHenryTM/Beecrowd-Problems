#include <stdio.h>

int rafael(int x, int y) {
    return (3 * x) * (3 * x) + (y * y);
}

int beto(int x, int y) {
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int carlos(int x, int y) {
    return -100 * x + (y * y * y);
}

int max(int rafael, int beto, int carlos) {
    int valores[3] = {rafael, beto, carlos}, max;
    
    for (int i = 0; i < 3; i++)
        if (i == 0)
            max = i;
        else if (valores[i] > valores[max])
            max = i;
            
    return max;
}

int main() {
    int casos_teste;
    
    scanf("%d", &casos_teste);
    
    for (int i = 0; i < casos_teste; i++) {
        int x, y, _rafael, _beto, _carlos, ganhador;
        
        scanf("%d %d", &x, &y);
        
        _rafael = rafael(x, y);
        _beto = beto(x, y);
        _carlos = carlos(x, y);
        
        ganhador = max(_rafael, _beto, _carlos);
        
        switch (ganhador) {
            case 0:
                printf("Rafael ganhou\n");
                break;
            case 1:
                printf("Beto ganhou\n");    
                break;
            case 2: 
                printf("Carlos ganhou\n");    
                break;
        }
    }
}