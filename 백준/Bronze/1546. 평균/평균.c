#include <stdio.h>
#include <stdlib.h>

int main() {
	int T;
	int	i;
	scanf("%d", &T);
	float* ptr = (float*)malloc(sizeof(float) * T);

	for (i = 0; i < T; i++) { 
		scanf("%f", &ptr[i]);
	}

	float max = ptr[0];

	for (i = 1; i < T; i++) {
		if (ptr[i] >= max) {
			max = ptr[i];
		}
	}

	for (i = 0; i < T; i++) {
		ptr[i] = (ptr[i] / max) * 100;
	}

	float sum = 0;

	for (i = 0; i < T; i++) {
		sum += ptr[i];
	}
	
	printf("%f", sum / T);
	free(ptr);

}