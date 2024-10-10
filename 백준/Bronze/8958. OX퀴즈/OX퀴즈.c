#include <stdio.h>
#include <string.h>

int main() {

	int T, i, j;
	scanf("%d", &T);
	for (i = 0; i < T;i++) {
		char OX[100];
		scanf("%s", &OX);
		int total = 0;
		int continuity = 0;
		for (j = 0; j < strlen(OX);j++) {			
			if (OX[j] == 'O') {
				continuity++;
				total += continuity;
			}
			else {
				continuity = 0;
			}
		}
		printf("%d\n", total);
	}
	
}