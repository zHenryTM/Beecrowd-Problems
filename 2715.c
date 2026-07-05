#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	long long int trabalhos, *dificuldades = NULL;
	
	while (scanf("%lld", &trabalhos) != EOF)
	{
		long long int soma_dificuldades = 0, soma_rangel = 0, soma_gugu, diferenca, menor;
		
		dificuldades = calloc(trabalhos, sizeof(long long int));
		if (!dificuldades) exit(1);
			
		for (int i = 0; i < trabalhos; i++) {
			scanf("%lld", &dificuldades[i]);
			
			soma_dificuldades += dificuldades[i];
		}
		
		for (int i = 0; i < trabalhos; i++) {
			soma_rangel += dificuldades[i];
			soma_gugu = soma_dificuldades - soma_rangel;
			diferenca = llabs(soma_rangel - soma_gugu);
			
			if (!i)	menor = diferenca;
			else if (diferenca < menor) menor = diferenca;
		}
		
		printf("%lld\n", menor);
		
		free(dificuldades);
	}
	
	return 0;
}
