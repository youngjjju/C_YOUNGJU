#include <stdio.h>
#include <math.h>

double log2(double a) {
	double log2 = log(a) / log(2);
	return log2;
}


int main() {
	
	int i = 0;
	scanf("%d", &i);
	i = (int)(log2(i));
	printf("%d", i + 10);
}