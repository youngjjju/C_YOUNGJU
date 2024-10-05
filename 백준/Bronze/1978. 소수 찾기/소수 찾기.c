#include <stdio.h>
#include <stdlib.h>

int sosu(int a) {

	if (a == 1) { return 0; }

	int i, count=0;
	for (i = 2; i <= ((a + 1) / 2); i++) {
		if (a % i == 0) {
			count++;
		}
	}
	if (count == 0) { return 1; } // 소수면 1 반환
	else { return 0; }
}

int main() {

	int T = 0,i;
	int count = 0;
	scanf("%d", &T);
	int* ptr = (int*)malloc(sizeof(int) * T);

	for (i = 0; i < T;i++) {
		scanf("%d", &ptr[i]);
	}
	
	for (i = 0; i < T;i++) {
		if (sosu(ptr[i]) == 1) {
			count++;
		}
	}
	printf("%d", count);
}
