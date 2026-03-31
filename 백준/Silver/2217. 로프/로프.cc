#include "bits/stdc++.h"

using namespace std;

int ropes[100001];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ropes[i];
	}
	sort(ropes, ropes + N, cmp);

	int currentWeight = 0;
	int currentCnt = 0;

	for (int i = 0; i < N; i++) {
		currentWeight = max(currentWeight, ropes[i] * (i + 1));
	}
	cout << currentWeight;
	return 0;
}
