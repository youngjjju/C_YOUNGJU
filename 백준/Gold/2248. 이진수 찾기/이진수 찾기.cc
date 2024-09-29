#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <time.h>
#define INF 100000000
#define endl '\n'
#define MOD 1000000009

using namespace std;

long long n, l, k;
long long memo[32][32];

long long dp(int i, int j) {
	if (j == l || i >= n) return 1;
	if (memo[i][j]) return memo[i][j];
	return memo[i][j] = dp(i + 1, j) + dp(i + 1, j + 1);
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> n >> l >> k;
	for (int i = 1, j = 0; i <= n; i++) {
		if (dp(i, j) >= k) cout << 0;
		else {
			cout << 1;
			k -= dp(i, j);
			j++;
		}
	}

	return 0;
}