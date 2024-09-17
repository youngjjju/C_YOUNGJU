#include <stdio.h>
#include <string.h>

int main() {

	int i = 0, T = 0;
	int count = 0;

	char numbers[100];

	scanf("%d", &T);

	scanf("%s", numbers);

	while (1) {
		if (numbers[i] == NULL) {
			break;
		}
		count += numbers[i] - '0';
		i++;
	}
	printf("%d", count);
}