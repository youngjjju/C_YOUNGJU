#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

	int N, connectedNumber;
	cin >> N >> connectedNumber;
	vector <vector<int>> connectedCom(N+1);
	stack <int> stk;
	int visit[101] = {0, };
	int visitNum = 0;

	for (int i = 0; i < connectedNumber; i++) {
		int com1, com2;
		cin >> com1 >> com2;
		connectedCom[com1].push_back(com2);
		connectedCom[com2].push_back(com1);
	}
	visit[1] = 1;
	stk.push(1);
	while (!stk.empty()) {
		int cur = stk.top();
		stk.pop();
		for (int com : connectedCom[cur]) {
			if (!visit[com]) {
				visit[com] = 1;
				visitNum++;
				stk.push(com);
			}
		}
	}
	printf("%d", visitNum);
}