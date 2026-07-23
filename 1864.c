#include <stdio.h>
int main() {
  char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    printf("%c", frase[i]);
  printf("\n");
}
