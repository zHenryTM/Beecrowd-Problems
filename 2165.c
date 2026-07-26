#include <stdio.h>
#include <string.h>
 
int main() {
    char tweet[501];
    
    scanf("%[^\n]%*c", tweet);
    
    if (strlen(tweet) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    
    return 0;
}
