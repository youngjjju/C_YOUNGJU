#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int T, i, j;
	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}	