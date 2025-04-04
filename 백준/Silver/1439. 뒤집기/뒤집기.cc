#include <iostream>
using namespace std;

int main() {
    static char nums[1000001];  // 1MB 이상은 static 또는 전역 변수 추천
    int zero = 0, one = 0;
    cin >> nums;

    // 첫 문자 처리
    if (nums[0] == '0') zero++;
    else one++;

    // 직접 strlen 쓰지 말고 while로 길이 탐색
    for (int i = 1; nums[i] != '\0'; i++) {
        if (nums[i] == nums[i - 1]) continue;
        if (nums[i] == '0') zero++;
        else one++;
    }

    cout << (zero <= one ? zero : one);
}