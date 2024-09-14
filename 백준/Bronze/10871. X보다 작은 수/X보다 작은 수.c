#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_num, num,i = 0;
	scanf("%d %d", &arr_num, &num);
	
	int* ptr = (int*)malloc(sizeof(int) * arr_num);
	for (i = 0; i < arr_num; i++) {
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < arr_num; i++) {
		if (ptr[i] < num) {
			printf("%d ", ptr[i]);
		}
	}
}