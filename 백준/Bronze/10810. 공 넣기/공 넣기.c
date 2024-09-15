#include <stdio.h>
#include <stdlib.h>

int main() {

	int basket_num, T, i, j;
	T = 0;
	scanf("%d %d", &basket_num, &T);
	int* ptr = (int*)malloc(sizeof(int) * (basket_num+1));

	for (i = 0; i <= basket_num; i++) {
		ptr[i] = 0;
	}

	for (i = 1; i <= T; i++) {
		int start, end, ball_num = 0;
		scanf("%d %d %d", &start, &end, &ball_num);
		for (j = 0; j <= end - start; j++) {
			ptr[start + j] = ball_num;
		}
	}
	
	for (i = 1; i <= basket_num; i++) {
		printf("%d ", ptr[i]);
	}
	free(ptr);
}