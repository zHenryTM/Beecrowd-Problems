#include <stdio.h>

int e_primo(int x) {
	if (x < 2) return 0;
	
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return 0;
	
	return 1;
}

int main() {
	int moedas;
	
	while (scanf("%d", &moedas) != EOF)
	{
		int valores_moedas[moedas], salto, soma_valores = 0;
		
		for (int i = 0; i < moedas; i++)
			scanf("%d", &valores_moedas[i]);
		
		scanf("%d", &salto);
		
		for (int i = moedas - 1; i >= 0; i -= salto)
			soma_valores += valores_moedas[i];

		if (e_primo(soma_valores)) 
			printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
		else
			printf("Bad boy! I’ll hit you.\n");
	}
	
	return 0;	
}
