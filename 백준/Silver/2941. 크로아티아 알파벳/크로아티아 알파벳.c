#include <stdio.h>
#include <string.h>

int main() {

	char words[100];
	int i, count = 0;
	scanf("%s", words);
	for (i = 0; i < strlen(words); i++) {
		if (i <= strlen(words) - 2) {
			int solved = 0;
			if (words[i] == 'c' && words[i + 1] == '=') {
				i++;
				count++;
				solved++;
			}
			if (words[i] == 'c' && words[i + 1] == '-') {
				i++;
				count++;
				solved++;
			}
			if (words[i] == 'd'&&words[i + 1] == 'z' && words[i + 2] == '=') {
				i += 2;
				count++;
				solved++;
			}
			if (words[i] == 'd' && words[i + 1] == '-') {

				i++;
				count++;
				solved++;
			}
			if (words[i] == 'l' && words[i + 1] == 'j') {
				i++;
				count++;
				solved++;
			}
			if (words[i] == 'n' && words[i + 1] == 'j') {
				i++;
				count++;
				solved++;
			}
			if (words[i] == 's' && words[i + 1] == '=') {
				i++;
				count++;
				solved++;
			}
			if (words[i] == 'z' && words[i + 1] == '=') {
				i++;
				count++;
				solved++;
			}
			if (solved == 0) {
				count++;
			}
		}
		else { count++; }
	}
	printf("%d", count);
}