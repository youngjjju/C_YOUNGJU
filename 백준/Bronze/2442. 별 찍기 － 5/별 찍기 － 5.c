#include <stdio.h>

int main(){

	int T, i, j, k;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {

		for (j=0; j < T - (i+1);j++) {
			printf(" ");
		}

		for (k = 0; k < 2 * i + 1;k++) {
			printf("*");
		}
		printf("\n");
	}

}