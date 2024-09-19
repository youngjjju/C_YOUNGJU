#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int arr[6] = { 1,1,2,2,2,8 };
    int* ptr = (int*)malloc(sizeof(int) * 6);
    int i;


    scanf("%d %d %d %d %d %d", &ptr[0], &ptr[1], &ptr[2], &ptr[3], &ptr[4], &ptr[5]);
    

    for (i = 0; i < 6;i++) {
        printf("%d ", arr[i] - ptr[i]);
    }

}
// 5번째 => 9개 출력 4번째 7개 출력