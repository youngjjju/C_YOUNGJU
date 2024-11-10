#include <stdio.h>
#include <stdlib.h>

int main() {
    int** matrix = (int**)malloc(sizeof(int*) * 101);
    int i, j;
    for (i = 0; i < 101; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * 101);
    }

    // 도화지 초기화
    for (i = 0; i < 101; i++) {
        for (j = 0; j < 101; j++) {
            matrix[i][j] = 0;
        }
    }

    int T;
    scanf("%d", &T);

    // 색종이 위치 입력 및 색종이 영역 표시
    for (i = 0; i < T; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        for (j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                matrix[j][k] = 1;
            }
        }
    }

    int total = 0;

    // 검은색 영역(1의 개수) 카운트
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (matrix[i][j] == 1) {
                total++;
            }
        }
    }

    printf("%d\n", total);

    // 동적 할당된 메모리 해제
    for (i = 0; i < 101; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
