#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> lineInfo[1001];
bool visitInfo1[1001];
bool visitInfo2[1001];
int sequence1[1001];
int sequence1Index = 0;
int sequence2[1001];
int sequence2Index = 0;

void dfs(int node) {
	
	visitInfo1[node] = true;
	sequence1[sequence1Index++] = node;

	for(int next:lineInfo[node]){
		if (!visitInfo1[next]) {
			dfs(next);
		}	
	}
}

void bfs(int node) {
	queue <int> q;
	q.push(node);
	visitInfo2[node] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		sequence2[sequence2Index++] = cur;
		for (int next : lineInfo[cur]) {
			if (!visitInfo2[next]) {
				visitInfo2[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {
	int N, M, V;
	cin >> N >> M >> V;
	queue<int> q;

	for (int i = 0; i < M; i++) {
		int node1, node2;
		cin >> node1 >> node2;
		lineInfo[node1].push_back(node2);
		lineInfo[node2].push_back(node1);
	}
	for (int i=1; i<=N; i++){
		sort(lineInfo[i].begin(), lineInfo[i].end());
	}
	dfs(V);
	bfs(V);
	for (int i = 0; i < N; i++) {
		if (sequence1[i] != 0) { cout << sequence1[i] << ' '; }
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		if (sequence2[i] != 0) { cout << sequence2[i] << ' '; }
	}
}