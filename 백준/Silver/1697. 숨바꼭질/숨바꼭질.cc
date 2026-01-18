#include "bits/stdc++.h"

using namespace std;

int vis[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	fill(vis, vis + 100001, -1);
	queue <int>Q;
	Q.push(N);
	vis[N] = 0;
	
	while (vis[K] == -1) {
		int cur = Q.front();
		Q.pop();
		int tmp[3] = { cur - 1, cur + 1, cur * 2 };
		
		for (int i = 0; i < 3; i++) {
			if (tmp[i] < 0 || tmp[i] > 100000) continue;
			if (vis[tmp[i]] != -1) continue;
			vis[tmp[i]] = vis[cur] + 1;
			Q.push(tmp[i]);
		}
	}
	cout << vis[K];
	return 0;
}