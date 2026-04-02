#include "bits/stdc++.h"

using namespace std;

int N;
int arr[100][100];
int visited[100][100];

int dr[4] = { -1, 1, 0, 0 };
int dc[4] = { 0, 0, 1, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	int result = 1;

	for (int i = 1; i < 100; i++) {
		
		int resultForI = 0;

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (visited[j][k] != i && arr[j][k] > i) {
					deque <pair<int, int >> dq;
					dq.push_back({ j, k });
					visited[j][k] = i;
					resultForI++;
					while (!dq.empty()) {
						int curr_R = dq.front().first;
						int curr_C = dq.front().second;
						dq.pop_front();
						for (int u = 0; u < 4; u++) {
							int nr = curr_R + dr[u];
							int nc = curr_C + dc[u];
							if (nr < N && nr >= 0 && nc < N && nc >= 0 && arr[nr][nc] > i && visited[nr][nc] != i) {
								dq.push_back({ nr, nc });
								visited[nr][nc] = i;
							}
						}
					}
				}

			}
		}
		result = max(resultForI, result);
	}
	cout << result;
}