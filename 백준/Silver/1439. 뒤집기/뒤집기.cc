#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char nums[1000000];
	int zero = 0;
	int one = 0;
	cin >> nums;
	if (nums[0] == '0') { zero++; }
	else { one++; }
	for (int i = 1; i < strlen(nums); i++) {
		
		if (nums[i] == nums[i - 1]) {
			continue;
		}
		if (nums[i] == '0') { zero++; }
		else { one++; }
	}
	zero = (zero <= one) ? zero : one;
	cout << int(zero);
}
