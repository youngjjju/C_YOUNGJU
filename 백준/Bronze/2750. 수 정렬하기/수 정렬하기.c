#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {

	int n, i;
	scanf("%d", &n);
	int* ptr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &ptr[i]);
	}
	int index = n - 1;
	while (index != 0) {
		
		for (i = 0; i < index; i++) {
			if (ptr[i] > ptr[i + 1]) {
				swap(&ptr[i], &ptr[i + 1]);
			}
		}
		index--;
	}

	for (i = 0;i < n; i++) {
		printf("%d\n", ptr[i]);
	}
}