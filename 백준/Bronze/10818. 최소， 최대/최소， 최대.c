#include <stdio.h>
#include <stdlib.h>
 

int main() {

	int T, i, min = 0;
	int max = 0;
	scanf("%d", &T);

	int* ptr = (int*)malloc(sizeof(int) * T);

	for (i = 0; i < T; i++) {
		int j = 0;
		scanf("%d", &j);
		ptr[i] = j;
	}
	
	max = ptr[0];
	min = ptr[0];

	for (i = 1; i < T;i++) {
		if (ptr[i] > max) {
			max = ptr[i];
		}
		
		if (ptr[i] < min) {
			min = ptr[i];
		}
	}

	printf("%d %d", min, max);
}