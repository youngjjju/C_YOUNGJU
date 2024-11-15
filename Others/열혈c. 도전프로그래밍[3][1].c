#include <stdio.h>
#include <string.h>

int main() {
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}

	int tmp[4][4];
	memcpy(tmp, arr, sizeof(arr));
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = tmp[3 - j][i];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
}
