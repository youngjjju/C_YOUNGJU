#include <stdio.h>
#include <stdlib.h>

// 이진 탐색을 위한 비교 함수
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int n, q, i, j; 
    int arr[50001];
    scanf("%d %d", &n, &q);
    
    // 배열 입력 받기
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    // 배열을 오름차순으로 정렬
    qsort(arr, n, sizeof(int), compare);

    // 각 쿼리 처리
    for(j=0; j<q; j++){
        int input;
        scanf("%d", &input);
        
        // 이진 탐색을 통해 input보다 작은 값의 개수 구하기
        int low = 0, high = n-1, down = 0, up = 0;

        // input보다 작은 값들의 개수
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < input) {
                down = mid + 1;  // input보다 작은 값들의 개수
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // input이 배열에 존재하는지 확인하고, 그 개수 세기
        int count = 0;
        low = 0;
        high = n-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == input) {
                count++;
                // 왼쪽에서 input 값의 개수 세기
                int left = mid - 1;
                while (left >= 0 && arr[left] == input) {
                    count++;
                    left--;
                }
                // 오른쪽에서 input 값의 개수 세기
                int right = mid + 1;
                while (right < n && arr[right] == input) {
                    count++;
                    right++;
                }
                break;
            } else if (arr[mid] < input) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // input이 배열에 없다면 0 출력
        if (count == 0) {
            printf("0\n");
        } else {
            up = n - down - count;  // input보다 큰 값들의 개수
            printf("%d\n", down * up);  // 결과 출력
        }
    }

    return 0;
}
