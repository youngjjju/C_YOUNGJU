#include "bits/stdc++.h"

using namespace std;

int DP[15];

int main() {
	int T; cin >> T;

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;
	for (int i = 4; i < 15; i++) {
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i-3];
	}
	
	while (T--) {
		int tmp; cin >> tmp;
		cout << DP[tmp] << '\n';
	}
}