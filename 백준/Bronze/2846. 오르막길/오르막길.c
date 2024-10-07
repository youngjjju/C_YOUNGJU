#include <stdio.h>
#include <string.h>

int main() {
	
	int T, i, count = 0;
	scanf("%d", &T);
	getchar();

	char arr[3000];
	int num[1000];
	fgets(arr, sizeof(arr), stdin);
	char* token = strtok(arr, " ");

	while (token != NULL) {
	
		sscanf(token, "%d", &num[count++]);
		token = strtok(NULL, " ");
	}
	
	int going_up = 0;
	int max = 0;

	for (i = 1; i < count; i++) {
		if (num[i] > num[i - 1]) {
			going_up += num[i] - num[i - 1];
		}
		else if (num[i] <= num[i - 1]) {
			if (going_up >= max) {
				max = going_up;
				going_up = 0;
			}
			else {
				going_up = 0;
			}
		}
		if (going_up > max) {
			max = going_up;
		}
	}
	printf("%d", max);
	
}