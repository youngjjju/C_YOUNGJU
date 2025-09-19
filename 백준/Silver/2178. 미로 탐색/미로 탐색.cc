#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <deque>

using namespace std;


int main() {

	int N, M; cin >> N >> M;
	vector<vector<int>> v(N, vector<int>(M));
	vector<vector<int>> mv = { {1,0}, {0,1}, {-1,0}, {0, -1} };
	vector<vector<int>> visit(N, vector<int>(M, 0));

	visit[0][0] = 1;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < M; j++) {
			v[i][j] = tmp[j] - '0';
		}
	}

	deque<pair<int, int>> dq;
	dq.push_back({ 0,0 });

	while (!dq.empty()) {
		auto tmp = dq.front();
		dq.pop_front();

		for (int i = 0; i < 4; i++) {
			int n_c = tmp.first + mv[i][0];
			int n_r = tmp.second + mv[i][1];

			if (n_c < 0 || n_r < 0 || n_c >= v.size() || n_r >= v[0].size()) {
				continue;
			}

			if (v[n_c][n_r] && !visit[n_c][n_r]) {
				v[n_c][n_r] = v[tmp.first][tmp.second] + 1;
				visit[n_c][n_r] = 1;
				dq.push_back({ n_c, n_r });
			}
		}
	}
	
	cout << v[N-1][M-1];

	return 0;

}