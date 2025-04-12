#include <iostream>
#include <vector>
using namespace std;
int main() {
	
	int N, K;
	vector<int> coins;
	cin >> N;
	cin >> K;
	int remain = K;
	int times = 0;

	for (int i = 0; i < N; i++) { 
		int temp;
		cin >> temp;
		coins.push_back(temp); 
	}
	
	for (int i = N - 1; i >= 0; i--) {
		if (coins[i] > K) { continue; }
		else {
			while (coins[i]<=remain) {
				remain -= coins[i];
				times++;
				if (remain == 0) { break; }
			}
		}
		if (remain == 0) { break; }
	}
	cout << times;

}