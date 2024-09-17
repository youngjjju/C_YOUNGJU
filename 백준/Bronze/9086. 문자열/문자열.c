#include <stdio.h>
#include <string.h>

int main() {

	int i, T = 0;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		char word[1000];
		scanf("%s", word);
		printf("%c%c\n", word[0], word[strlen(word)-1]);
	}

}