#include <stdio.h>
#include <string.h>

int para_int(char x) {
	switch (x) {
		case '0': return 0; break;
		case '1': return 1; break;
		case '2': return 2; break;
		case '3': return 3; break;
		case '4': return 4; break;
		case '5': return 5; break;
		case '6': return 6; break;
		case '7': return 7; break;
		case '8': return 8; break;
		case '9': return 9; break;
	}
}

int fatorial(int x) {
	if (x == 0 || x == 1) return 1;
	
	return x * fatorial(x - 1);
}

int main() {
	char acm[6];
	
	while (1) {
		int n, decimal = 0;
		
		scanf(" %s", acm);
		
		if (!strcmp(acm, "0"))
			break;
		
		n = strlen(acm);
		
		for (int i = n - 1, j = 1; i >= 0; i--, j++) {
			int digito = para_int(acm[i]);
			int f = fatorial(j);
			
			decimal += digito * f;
		}
		
		printf("%d\n", decimal);
	}
}
