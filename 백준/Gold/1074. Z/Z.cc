#include "bits/stdc++.h"

using namespace std;

long long total;

int pow(int a, int b) {
	int tmp = a;
	if (b == 0) return 1;
	for(int i=0; i<b-1; i++) a *= tmp;
	return a;
}

void func(int N, int r, int c) {
	int tmp = 0;
	int L = pow(2, N);
	int B = pow((pow(2, N) / 2), 2);

	if (N == 0) return;

	if (r < (L / 2) && c < (L / 2)) {
		func(N - 1, r, c);
	}
	if (r < (L / 2) && c >= (L / 2)) {
		total += B;
		func(N - 1, r, c - L / 2);
	}
	if (r >= (L / 2) && c < (L / 2)) {
		total += 2 * B;
		func(N - 1, r - L / 2, c);
	}
	if (r >= (L / 2) && c >= (L / 2)) {
		total += 3 * B;
		func(N - 1, r - L / 2, c - L / 2);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, r, c;
	cin >> N >> r >> c;

	func(N, r, c);
	cout << total;
}