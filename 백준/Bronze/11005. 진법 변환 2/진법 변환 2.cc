#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, unit1;
    cin >> n1 >> unit1;
    
    vector<int> v;

    if (n1 == 0) {
        cout << 0;
        return 0;
    }

    while (n1 > 0) {
        int remain = n1 % unit1;
        v.push_back(remain);
        n1 /= unit1;
    }

    // 거꾸로 출력
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= 10) {
            cout << char(v[i] + 'A' - 10);  // 10 → 'A', 11 → 'B', ...
        } else {
            cout << v[i];
        }
    }

    cout << endl;
    return 0;
}
