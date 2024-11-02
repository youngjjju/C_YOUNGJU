#include <stdio.h>
#include <string.h>

int main() {
	int arr[26] = { 0, };
	char word[100];
	int i;
	scanf("%s", word);
	for (i = 0; i < strlen(word); i++) {
		arr[(int)word[i] - 97] += 1;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}
}