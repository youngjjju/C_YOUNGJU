#include <stdio.h>

int main() {
	
	int T, count=0, i = 0;
	scanf("%d", &T);
	int arr[1000];

	for (i = 0; i < T; i++) {
		scanf("%d", &arr[count++]);
	}
	
	int going_up=0, max = 0;

	for (i = 0; i < T - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			going_up += arr[i + 1] - arr[i];
		}
		if (arr[i] >= arr[i + 1]) {
			if (going_up > max) {
				max = going_up;
				going_up = 0;
			}
			else { going_up = 0; }
		}
	}
	
	if (going_up > max) {
		max = going_up;
	}

	printf("%d", max);
	
}
