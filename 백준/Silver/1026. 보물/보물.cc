#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int N;
	cin >> N;
	vector <int>A;
	vector <int>B;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		B.push_back(temp);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());
	int total=0;
	for (int i = 0; i < N; i++) {
		total += A[i] * B[i];
	}
	cout << total;
}