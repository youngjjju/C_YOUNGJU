#include "bits/stdc++.h"

using namespace std;

int n, m;
int arr[500][500];
int visited[500][500];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int MAX;
int NUM;

stack<pair<int, int>> v;

int isOverArr(int row, int col) {
	if (row < 0 || row >= n || col < 0 || col >= m) return 1;
	return 0;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int tmp_MAX = 0;
			if (arr[i][j] == 1 && !visited[i][j]) {
				v.push(make_pair(i, j));
				visited[i][j] = 1;
				tmp_MAX++;
				NUM++;
			}
			
			while (!v.empty()) {
				int row = v.top().first;
				int col = v.top().second;
				v.pop();
				for (int k = 0; k < 4; k++) {
					int nx = row + dx[k];
					int ny = col + dy[k];
					if (!isOverArr(nx, ny) && arr[nx][ny] == 1 && visited[nx][ny] != 1) {
						v.push({ nx, ny });
						visited[nx][ny] = 1;
						tmp_MAX++;
					}
				}
			}
			if (tmp_MAX > MAX) MAX = tmp_MAX;
		}
	}

	cout << NUM << '\n' << MAX;
	return 0;

}