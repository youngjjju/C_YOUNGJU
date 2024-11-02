#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char** row = (char**)malloc(5 * sizeof(char*));
	char i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		row[i] = (char*)malloc(15 * sizeof(char));
	}
	for (i = 0; i < 5; i++) {
		scanf("%s", row[i]);
	}

	int one = strlen(row[0]);
	int two = strlen(row[1]);
	int three = strlen(row[2]);
	int four = strlen(row[3]);
	int five = strlen(row[4]);
	int j1 = 0;

	for (i = 0; i < 15; i++) {
	
		if (i + 1 <= one) {
			printf("%c", row[0][i]);
		}
		if (i + 1 <= two) {
			printf("%c", row[1][i]);
		}
		if (i + 1 <= three) {
			printf("%c", row[2][i]);
		}
		if (i + 1 <= four) {
			printf("%c", row[3][i]);
		}
		if (i + 1 <= five) {
			printf("%c", row[4][i]);
		}
	}
}