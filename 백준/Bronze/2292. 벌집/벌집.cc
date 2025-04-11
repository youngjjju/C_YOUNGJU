#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num = 1;
	int addedNum = 1;
	int i=1;
	while (addedNum < N) {
		addedNum += 6 * i;
		num += addedNum;
		i++;
	}
	cout << i;
}