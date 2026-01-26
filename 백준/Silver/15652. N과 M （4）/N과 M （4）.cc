#include "bits/stdc++.h"

using namespace std;

int N, M;
int arr[10];

void func(int k, int min) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (i >= min ) {
			arr[k] = i;
			min = i;
			func(k + 1, min);
		}
	}
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	func(0, 0);
}