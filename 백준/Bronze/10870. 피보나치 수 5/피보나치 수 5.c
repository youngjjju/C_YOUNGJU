#include <stdio.h>

int main() {

	int arr[21] = {0,1};
	int i;
	for (i = 2; i < 21; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
		scanf("%d", &i);
		printf("%d", arr[i]);

}