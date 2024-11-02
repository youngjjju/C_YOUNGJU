#include <stdio.h>
#include <stdlib.h>

void generatePermutations(int* arr, int* selected, int n, int r, int depth) {
    if (depth == r) {
        for (int i = 0; i < r; i++) {
            printf("%d ", selected[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        selected[depth] = arr[i];
        generatePermutations(arr, selected, n, r, depth + 1);
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // 선택할 수 있는 숫자 배열 (1부터 N까지)
    int* arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1; // 1부터 N까지의 숫자
    }

    int* selected = (int*)malloc(sizeof(int) * M);
    if (selected == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(arr);
        return 1;
    }

    generatePermutations(arr, selected, N, M, 0);

    // 메모리 해제
    free(arr);
    free(selected);

    return 0;
}
