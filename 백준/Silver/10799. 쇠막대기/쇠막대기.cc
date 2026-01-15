#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> laser;
	string p;
	deque<char> dq;
	int result = 0;
	cin >> p;

	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '(') {
			dq.push_back(i);
			continue;
		}
		if (p[i] == ')' && (p[i-1] == '(')) {
			dq.pop_back();
			result += dq.size();
			continue;
		}
		dq.pop_back();
		result++;
	}

	cout << result;
	return 0;
}