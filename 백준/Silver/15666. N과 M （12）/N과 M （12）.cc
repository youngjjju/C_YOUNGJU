#include "bits/stdc++.h"

using namespace std;

int N, M, last;
int arr_in[10], arr_out[10];

void func(int k, int start) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_out[i] << ' ';
		}
		cout << '\n';
		return;
	}
	int last = 0;
	for (int i = start; i < N; i++) {
		if (arr_in[i] == last) continue;		
		arr_out[k] = arr_in[i];
		last = arr_out[k];
		func(k + 1, i);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		arr_in[i] = tmp;
	}
	sort(arr_in, arr_in + N);
	func(0, 0);
}