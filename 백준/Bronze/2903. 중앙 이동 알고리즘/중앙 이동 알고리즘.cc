#include <iostream>
#include <vector>
using namespace std;

int pow(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}


int main() {

	int v[17];
	int N;
	cin >>  N;
	v[0] = 2;
	for (int i = 1; i < 17; i++) {
		v[i] = v[i - 1] + pow(2, i-1);
	}
	cout << pow(v[N], 2);
}