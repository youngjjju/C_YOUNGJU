#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    while (n > 0) {
        int tmp = n % 3;
        n /= 3;
        if (tmp == 0) {
            n--;
            tmp = 4;
        }
        
        answer = to_string(tmp) + answer;
    }
    return answer;
}

// 3진수인데 012가 아니라 124
    
// 진짜 3진수

// 1 -> 1
// 2 -> 2
// 3 -> 10 *
// 4 -> 11
// 5 -> 12
// 6 -> 20 *
// 7 -> 21
// 8 -> 22
// 9 -> 100 *
// 10 -> 101
// 11 -> 102
// 12 -> 110 *
    
// 124는

// 1 -> 1
// 2 -> 2
// 3 -> 4 *
// 4 -> 11
// 5 -> 12
// 6 -> 14 *
// 7 -> 21
// 8 -> 22
// 9 -> 24 *
// 10 -> 41
// 11 -> 42
// 12 -> 44 *