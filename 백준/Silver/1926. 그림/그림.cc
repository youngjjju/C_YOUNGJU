#include "bits/stdc++.h"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int row, col, num_pic(0), result(0);
	int back[500][500] = {0,};
	int visit[500][500] = {0,};
	int dx[4] = { 1, -1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };

	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int tmp;
			cin >> tmp;
			back[i][j] = tmp;
		}
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			
			if (!back[i][j] || visit[i][j]) continue;
			deque <pair<int, int>> Q;
			Q.push_back({ i,j });
			visit[i][j] = 1;
			num_pic++;
			int mx(0);

			while (!Q.empty()) {
				int tmp_x = Q.front().first;
				int tmp_y = Q.front().second;
				Q.pop_front();
				mx++;
				for (int k=0; k < 4; k++) {
					int new_x = tmp_x + dx[k];
					int new_y = tmp_y + dy[k];

					if (new_x < 0 || new_x >= row || new_y < 0 || new_y >= col) continue;
					if (visit[new_x][new_y] || !back[new_x][new_y]) continue;

					visit[new_x][new_y] = 1;
					Q.push_back({ new_x, new_y });
				}
			}
			result = max(mx, result);
		}
	}
	cout << num_pic << '\n';
	cout << result;
	return 0;
}