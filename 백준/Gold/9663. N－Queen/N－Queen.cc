#include "bits/stdc++.h"

using namespace std;

int N;
int isused_col[15];
int isused_r_diag[30];
int isused_l_diag[30];
int total;

void func(int k) {
	if (k == N) {
		total++;
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!isused_col[i] && !isused_r_diag[k+i] && !isused_l_diag[N+k-i-1]) {
			isused_col[i] = 1;
			isused_r_diag[k + i] = 1;
			isused_l_diag[N + k - i - 1] = 1;
			func(k + 1);
			isused_col[i] = 0;
			isused_r_diag[k + i] = 0;
			isused_l_diag[N + k - i - 1] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	func(0);

	cout << total;
}