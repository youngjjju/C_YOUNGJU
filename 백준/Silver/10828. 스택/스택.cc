#include "bits/stdc++.h"
using namespace std;

int main() {
	
	stack<int> s;
	int N; cin >> N;
	vector<int> v;

	while (N--) {
		string tmp;
		cin >> tmp;
		int size = s.size();
		
		if (tmp == "push") {
			int tmp_int;
			cin >> tmp_int;
			s.push(tmp_int);
		}
		else if (tmp == "pop") {
			if (size) {
				v.push_back(s.top());
				s.pop();
			} 
			else {
				v.push_back(-1);
			}
		}
		else if (tmp == "size") {
			v.push_back(size);
		}
		else if (tmp == "empty") {
			if (size) v.push_back(0);
			else v.push_back(1);
		}
		else if (tmp == "top") {
			if (size) v.push_back(s.top());
			else v.push_back(-1);
		}
	}

	for (int i : v) cout << i << '\n';
	return 0;
}