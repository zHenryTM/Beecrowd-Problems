#include <stdio.h>
long long unsigned int f(int x);
long long unsigned int f(int x) {
    if (x == 0) return 0; 
    else if (x == 1) return 1;
    else {
        long long unsigned int a = 0, b = 1, c;
        for (int i = 1; i < x; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}
int main() {
    int casos_teste, valor;
    scanf("%d", &casos_teste);
    for (int i = 0; i < casos_teste; i++) {
          scanf("%d", &valor);
          printf("Fib(%d) = %lld\n", valor, f(valor));
    }
    return 0;
}
