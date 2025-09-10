#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<pair<int, int>>&p, int idx, int &count) {
	if (p[idx].first) {
		count++;
		return 1;
	}
	else p[idx].first = 1;

	dfs(p, p[idx].second - 1, count);
	return 1;
}

int main() {

	int T; cin >> T;
	vector<int> answer;

	while (T--) {
		
		int N, count = 0; cin >> N;
		vector<pair<int, int>> p;
		for (int i = 0; i < N; i++) {
			int temp;	cin >> temp;
			p.push_back({ 0 , temp }); // {방분 여부, 값}
		}
		for (int i = 0; i < N; i++) {
			if (!p[i].first) {
				dfs(p, i, count);
			}
		}
		answer.push_back(count);
	}
	for (int a : answer) {
		cout << a << endl;
	}
}