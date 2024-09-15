#include <stdio.h>
#include <stdlib.h>


int main() {

	int basket_num, T, i = 0;
	scanf("%d %d", &basket_num, &T);
	int* ptr = (int*)malloc(sizeof(int) * (1 + basket_num));
	
	for (i = 0; i <= basket_num; i++) {
		ptr[i] = i;
	}
	
	for (i = 0; i < T; i++){
		int first, second;
		int temp = 0;
		scanf("%d %d", &first, &second);
		temp = ptr[first];
		ptr[first] = ptr[second];
		ptr[second] = temp;
	}
	
	for (i = 1; i <= basket_num; i++) {
		printf("%d ", ptr[i]);
	}
	free(ptr);
}