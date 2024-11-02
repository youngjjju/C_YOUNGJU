#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int arr[8];
	int i = 0;
	for (i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}

	int as = 1;
	int ds = 1;
	int mx = 1;
	
	for (i = 0; i < 8; i++) {
		if (arr[i] != i + 1) {
			as = 0;
		}
	}
	for (i = 0; i < 8; i++) {
		if (arr[i] != 8 - i) {
			ds = 0;
		}
	}
	if (as == 0 && ds == 0) {
		printf("mixed");
	}
	else if (as == 1) {
		printf("ascending");
	}
	else {
		printf("descending");
	}
	
}