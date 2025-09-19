#include <string>
#include <vector>
using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    const int MOD = 1000000007;
    vector<vector<int>> grid(n+1, vector<int>(m+1, 0));
    grid[1][1] = 1;

    // 웅덩이 표시 (0으로 두기)
    for (auto &p : puddles) {
        grid[p[1]][p[0]] = -1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1) continue;
            if (grid[i][j] == -1) { // 웅덩이
                grid[i][j] = 0;
                continue;
            }
            if (grid[i-1][j] > 0) grid[i][j] = (grid[i][j] + grid[i-1][j]) % MOD;
            if (grid[i][j-1] > 0) grid[i][j] = (grid[i][j] + grid[i][j-1]) % MOD;
        }
    }
    return grid[n][m];
}
