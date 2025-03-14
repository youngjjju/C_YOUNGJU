#include <iostream>
using namespace std;

void peopleOUT(int& train, int num) {
	train = train - num;
}

void peopleIN(int& train, int num) {
	train = train + num;
}

void maxCheck(int& people, int &maxi) {
	if (people > maxi) {
		maxi = people;
	}
}

int main() {
	int max = 0;
	int people =0;
	int arr[10][2] = {
		0
	};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 10; i++) {
		peopleOUT(people, arr[i][0]);
		maxCheck(people, max);
		peopleIN(people, arr[i][1]);
		maxCheck(people, max);
	}
	cout << max;
}