#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int T, i, j;
	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		for (j = 0; j < T-i-1; j++) {
			printf(" ");
		}
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}	

// 첫번째 줄 => 네번 띄어쓰기 => 한번 별
// 두번째 줄 => 세번 띄어쓰기 => 두번 별
