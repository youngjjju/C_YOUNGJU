#include <stdio.h>
#include <stdlib.h>


int main() {

	// 1번 => 누구나, shake 출전권 (수상시)
	// 2번 => 솦,전전 아닌 사람, shake 출전은 안됨
	
	int D1, D2, S1;
	
	scanf("%d %d %d", &D1, &D2, &S1);
	if (D1 + S1 >= D2) {
		printf("%d", D1 + S1);
	}
	else {
		printf("%d", D2);
	}
}