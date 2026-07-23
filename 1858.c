#include <stdio.h>

int main() {
  int pessoas, menor_dano, i_menor_dano;

  scanf("%d", &pessoas);

  for (int i = 0; i < pessoas; i++) {
    int dano;

    scanf("%d", &dano);

    if (!i) {
      menor_dano = dano;
      i_menor_dano = i;
    } else if (dano < menor_dano) {
        menor_dano = dano;
        i_menor_dano = i;
    }
  }
    
  printf("%d\n", i_menor_dano + 1);

  return 0;
}
