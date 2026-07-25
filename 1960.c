#include <stdio.h>
#include <stdlib.h>

int main() {
    char unidades[10][10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char dezenas[10][10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char centenas[10][10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    int numero, temp, ordem = 0;

    scanf("%d", &numero);

    temp = numero;

    while (temp >= 1) {
        temp /= 10;
        ordem++;
    }

    if (ordem == 1) {
        printf("%s\n", unidades[numero]);
    } else if (ordem == 2) {
        int dezena = numero / 10;
        int unidade = numero % 10;

        printf("%s%s\n", dezenas[dezena], unidades[unidade]);
    } else {
        int centena = numero / 100;

        numero %= 100;

        int dezena = numero / 10;
        int unidade = numero % 10;

        printf("%s%s%s\n", centenas[centena], dezenas[dezena], unidades[unidade]);
    }
}
