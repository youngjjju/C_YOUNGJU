#include <iostream>
using namespace std;

int main() {

	int A, B, V;
	cin >> A;
	cin >> B;
	cin >> V;
	int temp = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0) {
		temp++;
	}
	cout << temp+1;
}