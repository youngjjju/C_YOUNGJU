#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector <int>v;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int total = 0;
	for (int i = 0; i < N; i++) {
		total += v[i] * (N - i);
	}
	cout << total;
}