#include <stdio.h>
#include <string.h>

int main() {

	int T,j,i,k;
	
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		int rewrite;
		char word[20];
		scanf("%d %s", &rewrite, word);
		for (j = 0; j < strlen(word); j++) {
			for (k = 0; k < rewrite;k++) {
				printf("%c", word[j]);
			}
			
		}	
		printf("\n");
	}
}