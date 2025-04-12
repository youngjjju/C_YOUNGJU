#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		vector<pair<int, int>> scores(N);
		for (int i = 0; i < N; ++i) {
			cin >> scores[i].first >> scores[i].second;
		}

		sort(scores.begin(), scores.end());

		int count = 1; 
		int bestInterview = scores[0].second;

		for (int i = 1; i < N; ++i) {
			if (scores[i].second < bestInterview) {
				count++;
				bestInterview = scores[i].second;
			}
		}
		cout << count << '\n';
	}
}
