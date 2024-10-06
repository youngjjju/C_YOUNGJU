#include <stdio.h>
#include <string.h>

int main() {
	
	char arr[1000000];
	int i;
	fgets(arr, sizeof(arr), stdin);
	
	int num[26] = { 0, };
	int K = strlen(arr)-1;

	for (i = 0; i < K; i++) {
	
		if(arr[i] >= 65 && arr[i] <= 90) {
			num[arr[i] - 65]++;
		}
		if (arr[i] >= 97 && arr[i] <= 122) {
			num[arr[i] - 97]++;
		}

	}

	int max = num[0];
	int maxcount=0;
	for (i = 1; i < 26; i++) {
		if (num[i] > max) {
			maxcount = i;
			max = num[i];
		}
		else if (num[i] == max) {
			maxcount = -2;
		}
	}

	printf("%c", 65 + maxcount);
	 
}
