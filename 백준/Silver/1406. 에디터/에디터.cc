#include "bits/stdc++.h"
using namespace std;

int main() {
	
	string tmp_str;
	cin >> tmp_str;
	list<char> L;

	for (int i = 0; i < tmp_str.size(); i++) {
		L.push_back(tmp_str[i]);
	}

	auto it = L.end();

	int N;
	cin >> N;

	while (N--) {
		
		char tmp_1;
		cin >> tmp_1;

		switch (tmp_1) {
		case 'L' :
			if (it != L.begin()) it--;
			break;
		case 'D' :
			if (it != L.end()) it++;
			break;
		case 'B' :
			if (it != L.begin()) {
				it--;
				it = L.erase(it);
			}
			break;
		case 'P':
			char tmp_2;
			cin >> tmp_2;
			L.insert(it, tmp_2);
			break;
		}

	}

	for (char c : L) cout << c;

    return 0;
}