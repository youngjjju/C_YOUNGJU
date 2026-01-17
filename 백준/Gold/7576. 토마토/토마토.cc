#include "bits/stdc++.h"

using namespace std;

int back[1000][1000];
int visi[1000][1000];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int mx = 1;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> Q;

	int row, col;
	cin >> col >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> back[i][j];
			if (back[i][j] == 1) {
				Q.push({ i, j });
				visi[i][j] = 1;
			}
		}
	}
	
	while (!Q.empty()) {
		int x = Q.front().first;
		int y = Q.front().second;
		Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= row || ny < 0 || ny >= col) continue;
			if (visi[nx][ny] || (back[nx][ny] == -1)) continue;
			Q.push({ nx, ny });
			visi[nx][ny] = 1;
			back[nx][ny] = back[x][y] + 1;
			mx = max(mx, back[nx][ny]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (back[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << mx - 1;
	return 0;
}