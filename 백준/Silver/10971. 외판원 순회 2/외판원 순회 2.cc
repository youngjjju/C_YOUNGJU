#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<int>> v(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> v[i][j];

    vector<int> route;
    for (int k = 0; k < N; k++) route.push_back(k);

    int min_cost = INT_MAX;

    do {
        int cost = 0;
        bool valid = true;

        for (int j = 1; j < N; j++) {
            if (v[route[j-1]][route[j]] == 0) { // 갈 수 없는 길
                valid = false;
                break;
            }
            cost += v[route[j-1]][route[j]];
            if (cost >= min_cost) { // 가지치기
                valid = false;
                break;
            }
        }

        if (valid && v[route.back()][route[0]] != 0) { // 마지막에서 시작으로
            cost += v[route.back()][route[0]];
            min_cost = min(min_cost, cost);
        }

    } while (next_permutation(route.begin(), route.end()));

    cout << min_cost << "\n";
}
