//N개의 정수가 주어짐
//부분 수열 중 모든 원소를 더한 값이 S가 되는 경우의 수

#include "bits/stdc++.h"
using namespace std;

int N, M;
int arr_out[10], arr[10];

void func(int k, int min) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_out[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] >= min) {
			arr_out[k] = arr[i];
			func(k + 1, arr[i]);
			//arr_out[k] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	func(0, 0);
}
