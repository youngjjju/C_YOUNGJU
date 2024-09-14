#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k = 0;
	int arr[100];
	while (1) {
		int i, j;
		scanf("%d %d", &i, &j);
		if (i == 0 && j == 0) {
			break;
		}
		else {
			arr[k] = i + j;
		}
		k++;
	}
	for (i = 0; i < k; i++) {
		printf("%d\n", arr[i]);
	}
}	
