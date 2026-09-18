#include <stdio.h>
#include <string.h>

int main() {
    char S[102];
    
    while (scanf("%s", S) != EOF) {
        int n = strlen(S), bits = 0;
        
        for (int i = 0; i < n; i++)
            if (S[i] == '1')
                bits++;
        
        if (bits % 2 == 0)
            strcat(S, "0");
        else
            strcat(S, "1");
            
        printf("%s\n", S);    
    }
}