#include <stdio.h>

int main() {

	int T, i, j;
	scanf("%d", &T);

	printf("int a;\n");

	for (i = 0;i < T; i++) {
		printf("int ");
		for (j = 0;j < i+1;j++) {
			printf("*");
		}
		printf("ptr");
		if ( i+1 !=1 ) {
			printf("%d", i+1);
		}
		
		if (i + 1 != 1) {
			printf(" = &ptr");
		}
		else {
			printf(" = &a;");
		}
		if (i  > 1) {
			printf("%d;", i);
		}
		if (i == 1) {
			printf(";");
		}

		printf("\n");
	}
	
}