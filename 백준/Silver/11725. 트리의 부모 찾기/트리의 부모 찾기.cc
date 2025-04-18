#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int N;
	cin >> N;
	int* visit = new int[N+1]();
	vector<vector<int>> connectedNumbers(N+1); 
	stack<pair<int, int>> parentAndChild;
	int* parentList = new int[N+1];
	
	for (int i = 0; i < N-1; i++) {
		int node1, node2;
		cin >> node1 >> node2;
		connectedNumbers[node1].push_back(node2);
		connectedNumbers[node2].push_back(node1);
	}
	
	parentAndChild.push(make_pair(0, 1));
	visit[1] = 1;
	while (!parentAndChild.empty()) {
		int parent = parentAndChild.top().first;
		int child = parentAndChild.top().second;
		parentAndChild.pop();
		parentList[child] = parent;
		for (int currentChild : connectedNumbers[child]) {
			if (!visit[currentChild]) {
				parentAndChild.push({ child, currentChild });
				visit[currentChild] = 1;
			}
		}
	}
	
	for (int i = 2; i < N + 1; i++) {
		printf("%d\n",parentList[i]);
	}

}