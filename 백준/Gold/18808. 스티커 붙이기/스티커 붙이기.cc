#include "bits/stdc++.h"

using namespace std;

int N, M, K;
int note[40][40];

int isFit(int stk[10][10], int stk_R, int stk_C, int noteLeftCornerRow, int noteLeftCornerCol) {
	for (int i = 0; i < stk_R; i++) {
		for (int j = 0; j < stk_C; j++) {
			if (note[noteLeftCornerRow + i][noteLeftCornerCol + j] && stk[i][j]) {
				return 0;
			}
		}
	}
	return 1;
}
 
void flipStk(int stk[10][10], int stkFliped[10][10], int R, int C) {

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			stkFliped[j][R - i - 1] = stk[i][j];
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M >> K; // 노트북 Row, Col, 스티커 개수
	
	while (K--) {
		int stk[10][10];
		int R(0), C(0); // 스티커 Row, Col
		cin >> R >> C;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cin >> stk[i][j];
			}
		}

		int breakFlag = 0;
		for (int i = 0; i <= N - R; i++) {
			for (int j = 0; j <= M - C; j++) {
				/* 맞으면 스티커 붙이기 */ 
				if (isFit(stk, R, C, i, j)) {	
					for (int k = 0; k < R; k++) {
						for (int g = 0; g < C; g++) {
							if (stk[k][g]) note[i + k][j + g] = 1;
						}
					}	
					breakFlag = 1;
				}
				if (breakFlag) break;
			}
			if (breakFlag) break;
		}
		if (breakFlag) continue;

		int stkFliped_90[10][10];
		memset(stkFliped_90, 0, sizeof(stkFliped_90));
		flipStk(stk, stkFliped_90, R, C);
		int tmp = R; R = C; C = tmp;

		for (int i = 0; i <= N - R; i++) {
			for (int j = 0; j <= M - C; j++) {
				/* 맞으면 스티커 붙이기 */
				if (isFit(stkFliped_90, R, C, i, j)) {
					for (int k = 0; k < R; k++) {
						for (int g = 0; g < C; g++) {
							if (stkFliped_90[k][g]) note[i + k][j + g] = 1;
						}
					}
					breakFlag = 1;
				}
				if (breakFlag) break;
			}
			if (breakFlag) break;
		}
		if (breakFlag) continue;

		int stkFliped_180[10][10];
		memset(stkFliped_180, 0, sizeof(stkFliped_180));
		flipStk(stkFliped_90, stkFliped_180, R, C);
		tmp = R; R = C; C = tmp;

		for (int i = 0; i <= N - R; i++) {
			for (int j = 0; j <= M - C; j++) {
				/* 맞으면 스티커 붙이기 */
				if (isFit(stkFliped_180, R, C, i, j)) {
					for (int k = 0; k < R; k++) {
						for (int g = 0; g < C; g++) {
							if (stkFliped_180[k][g]) note[i + k][j + g] = 1;
						}
					}
					breakFlag = 1;
				}
				if (breakFlag) break;
			}
			if (breakFlag) break;
		}
		if (breakFlag) continue;

		int stkFliped_270[10][10];
		memset(stkFliped_270, 0, sizeof(stkFliped_270));
		flipStk(stkFliped_180, stkFliped_270, R, C);
		tmp = R; R = C; C = tmp;

		for (int i = 0; i <= N - R; i++) {
			for (int j = 0; j <= M - C; j++) {
				/* 맞으면 스티커 붙이기 */
				if (isFit(stkFliped_270, R, C, i, j)) {
					for (int k = 0; k < R; k++) {
						for (int g = 0; g < C; g++) {
							if (stkFliped_270[k][g]) note[i + k][j + g] = 1;
						}
					}
					breakFlag = 1;
				}
				if (breakFlag) break;
			}
			if (breakFlag) break;
		}
		if (breakFlag) continue;
	}
	
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (note[i][j]) cnt++;
		}
	}
	cout << cnt;
}