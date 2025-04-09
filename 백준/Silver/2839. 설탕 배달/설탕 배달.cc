#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num5 = 0;
	int num3 = 0;

	for (int i = 0; ;i++) {
		num5 += 1;
		if (N < 5 * num5) break;
	}
	while (num5 * 5 + num3 * 3 != N) {
		num5 -= 1;
		while (num5 * 5 + num3 * 3 < N) {
			num3 += 1;
		}
	}
	if (num5 < 0) {
		cout << -1;
	}
	else { cout << num5 + num3; }
	
}