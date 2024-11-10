#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j= 0;
	int** ptr = (int**)malloc(sizeof(int*) * 9);
	for (i = 0; i < 9; i++) {
		ptr[i] = (int*)malloc(sizeof(int) * 9);
	}

	int max = 0;
	int row, column;
	
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &ptr[i][j]);
			if (ptr[i][j] >= max) {
				max = ptr[i][j];
				row = i;
				column = j;
			}

		}
	}

	printf("%d\n", max);
	printf("%d %d", row + 1, column + 1);
}