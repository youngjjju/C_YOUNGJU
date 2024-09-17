#include <stdio.h>
#include <string.h>

int main() {

	int first, second;
	
	scanf("%d %d", &first, &second);

	int first_1 = first % 10;
	int first_10 = (first / 10) % 10;
	int first_100 = (first / 100) % 10;
	int second_1 = second % 10;
	int second_10 = (second / 10) % 10;
	int second_100 = (second / 100) % 10;

	if (first_1 > second_1) {
		printf("%d%d%d", first_1, first_10, first_100);
	}
	if (second_1 > first_1) {
		printf("%d%d%d", second_1, second_10, second_100);
	}
	if (second_1 == first_1) {
		if (first_10 > second_10) {
			printf("%d%d%d", first_1, first_10, first_100);
		}
		if (second_10 > first_10) {
			printf("%d%d%d", second_1, second_10, second_100);
		}
		if (second_10 == first_10) {
			if (first_100 > second_100) {
				printf("%d%d%d", first_1, first_10, first_100);
			}
			if (second_100 > first_100) {
				printf("%d%d%d", second_1, second_10, second_100);
			}
		}
	}
}