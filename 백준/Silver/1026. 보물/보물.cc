#include "bits/stdc++.h"
using namespace std;

int arr_A[51];
int arr_B[51];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int result = 0;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr_A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> arr_B[i];
	}

	sort(arr_A, arr_A + N);
	sort(arr_B, arr_B + N, cmp);

	for (int i = 0; i < N; i++) {
		result += arr_A[i] * arr_B[i];
	}
	cout << result;

	return 0;
}

