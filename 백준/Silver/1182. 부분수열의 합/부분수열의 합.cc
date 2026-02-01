//N개의 정수가 주어짐
//부분 수열 중 모든 원소를 더한 값이 S가 되는 경우의 수

#include "bits/stdc++.h"
using namespace std;

int N, S, total;
int arr[20];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i < (1 << N); i++) {
		long long sum = 0;
		for (int j = 0; j < N; j++) {
			if (i & (1 << j)) sum += arr[j];
		}
		if (sum == S) total++;
	}

	cout << total;
}
