#include "bits/stdc++.h"

using namespace std;

int DP[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;

	DP[1] = 0;

	for (int i = 2; i < N + 1; i++) {
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0) DP[i] = min(DP[i / 2] + 1, DP[i]);
		if (i % 3 == 0)DP[i] = min(DP[i / 3] + 1, DP[i]);
	}
	cout << DP[N];
}