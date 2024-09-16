#include <stdio.h>

int main() {

	
	char arr[1000] = {0,};
	scanf("%s", arr);
	int count = 0;
	int i = 0;
	while (1) {
		if (arr[i] != '\0') {
			count++;
		}
		else {
			break;
		}
		i++;
	}
	printf("%d", count);

}