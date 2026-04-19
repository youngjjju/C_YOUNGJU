#include "bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int result = 0;

	int N; cin >> N; // 접시 수
	int d; cin >> d; // 초밥의 가짓수
	int k; cin >> k; // 연속해서 먹는 접시의 수
	int c; cin >> c; // 쿠폰 번호
	vector<int> v; // 초밥 배열
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	unordered_map<int, int> um;
	int variant = 0;
	int couponPlus = 0;

	// 회전초밥 초기화
	for (int i = 0; i < k; i++) {
		// 이미 있으면 종류수 증가는 X, 
		if (um.count(v[i])) {
			um[v[i]]++;
		}
		else {
			um[v[i]]++;
			variant++;
		}
	}
	// 쿠폰초밥 초기화
	if (!um.count(c)) {
		couponPlus++;
	}
	result = variant + couponPlus;

	// 1번부터 N-K번째까지 순회
	for (int i = 1; i <= N - k; i++) {
		
		// 첫번째 원소 제거
		
		if (um[v[i - 1]] >= 2) {
			um[v[i - 1]]--;
		}
		else if (um[v[i - 1]] == 1) {
			um.erase(v[i - 1]);
			variant--;
		}

		// 새로 들어온 원소 추가
		if (um.count(v[i + k - 1])) {
			um[v[i + k - 1]]++;
		}
		else if (!um.count(v[i + k - 1])) {
			um[v[i + k - 1]]++;
			variant++;
		}

		// 쿠폰 번호 조치
		if (um.count(c)) {
			couponPlus = 0;
		}
		else {
			couponPlus = 1;
		}
		result = max(result, variant + couponPlus);
	}
	
	// N-K+1번부터 N-1번까지

	for (int i = 0; i < k-1; i++) {
		// N - k + i번째 원소가 빠짐
		if (um[v[N-k+i]] >= 2) {
			um[v[N-k+i]]--;
		}
		else if (um[v[N-k+i]] == 1) {
			um.erase(v[N-k+i]);
			variant--;
		}

		// i번째 원소가 들어옴 
		if (um.count(v[i])) {
			um[v[i]]++;
		}
		else if (!um.count(v[i])) {
			um[v[i]]++;
			variant++;
		}

		// 쿠폰 번호 조회
		if (um.count(c)) {
			couponPlus = 0;
		}
		else {
			couponPlus = 1;
		}

		result = max(result, variant + couponPlus);
	}

	cout << result;

	return 0;

} 