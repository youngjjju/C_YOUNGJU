#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int basket_num, T, i, j;
	scanf("%d %d", &basket_num, &T);

	int* ptr = (int*)malloc(sizeof(int) * (1+basket_num));
	int* ptr2 = (int*)malloc(sizeof(int) * (1+basket_num));

	for (i = 1; i <= basket_num; i++) {
		ptr[i] = i;
		ptr2[i] = i;
	}

	for (i = 0; i < T; i++) {
		int start, end;
		scanf("%d %d", &start, &end);

		for (j = 0; j <= end - start; j++) {
			ptr[start + j] = ptr2[end - j];
		}
		memcpy(ptr2, ptr, sizeof(int) * (basket_num + 1));
	}

	for (i = 0;i < basket_num; i++) {
		printf("%d ", ptr[i + 1]);
	}
	free(ptr);
	free(ptr2);
}
