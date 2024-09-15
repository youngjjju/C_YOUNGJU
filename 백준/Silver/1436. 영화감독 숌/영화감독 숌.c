#include <stdio.h>
#include <string.h>
int main() {
	int N;
	scanf("%d", &N);
	
	int count = 0;
	int number = 665;

	while (1) {
		number++;
		char str[12];
		sprintf(str, "%d", number);

		if (strstr(str, "666") != NULL) {
			count++; 
			if (count == N) {
				printf("%d\n", number); 
				break; 
			}
		}
			
	}
	
}