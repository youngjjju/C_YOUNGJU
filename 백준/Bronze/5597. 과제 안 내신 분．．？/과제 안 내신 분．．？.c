#include <stdio.h>
#include <math.h>


int main() {
	
	int i, arr[31];
	int arr2[2] = {0,0};

	for (i = 0; i <= 30;i++) {
		arr[i] = i;
	}
	
	for (i = 0; i < 28;i++) {
		int j,k = 0;
		scanf("%d", &j);
		for (k = 1; k <= 30; k++) {
			if (arr[k] == j) {
				arr[k] = 0;
			}
		}
	}
	for (i = 1; i <= 30; i++) {
		if (arr[i] != 0) {
			if (arr2[0] != 0) {
				arr2[1] = arr[i];
			}
			else {
				arr2[0] = arr[i];
			}
		}
	}
	
	
	if (arr2[1] >= arr2[0]) {
		printf("%d\n%d", arr2[0], arr2[1]);
	}
	else {
		printf("%d\n%d", arr2[1], arr2[0]);
	}
}