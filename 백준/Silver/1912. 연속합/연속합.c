#include <stdio.h>
#include <stdlib.h>

int main() {

	int T, i, j,k, all = 0, sum_count = 0, how_many_num = 1;
	scanf("%d", &T);
	int* numbers = (int*)malloc(sizeof(int) * T);
	
	for (i = 0; i < T; i++) {
		scanf("%d", &numbers[i]);
	}
	
	int max = numbers[0];
	int current = numbers[0];

	for (i = 1; i < T; i++) {
		 current = (current + numbers[i] >= numbers[i]) ? (current+numbers[i]) : (numbers[i]);
		 max = (current > max) ? (current) : max;
	}
	
	printf("%d", max);

}
