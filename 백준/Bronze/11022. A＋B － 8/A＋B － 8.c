#include <stdio.h>
#include <stdlib.h>

int main() {
	int T,i;
	scanf("%d", &T);
	
	int* ptr = (int*)malloc(sizeof(int) * T);
	int* ptr1 = (int*)malloc(sizeof(int) * T);
	int* ptr2 = (int*)malloc(sizeof(int) * T);

	for (i = 0; i < T; i++) {
		int j, k = 0;
		scanf("%d %d", &j, &k);
		ptr[i] = j + k;
		ptr1[i] = j;
		ptr2[i] = k;
	}
	
	for (i = 0; i < T; i++) {
		printf("Case #%d: %d + %d = %d\n", i+1, ptr1[i], ptr2[i], ptr[i]);
	}
}	