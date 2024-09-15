#include <stdio.h> 

int main() {

	int i, max, max_index;
	int arr[9] = {0, };

	for (i = 0; i < 9;i++) {
		int j;
		scanf("%d", &j);
		arr[i] = j;
	}
	
	max = arr[0];
	max_index = 1;

	for (i = 1; i < 9;i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", max_index);
}