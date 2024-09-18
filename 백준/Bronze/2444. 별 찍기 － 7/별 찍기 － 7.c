#include <stdio.h>

int main() {
    
    int i;
    scanf("%d", &i);
    int j = 0, k = 0,z;

    for (j = 0; j < i; j++) {

        for (z = 0; z < - j + i-1; z++) {
            printf(" ");
        }
        for (z = 0; z < 2 * (j + 1) - 1; z++) {
            printf("*");
        }
        printf("\n");
    }

    for (j=j-2; j >= 0 ; j--) {

        for (z = 0; z < - j + i-1; z++) {
            printf(" ");
        }
        for (z = 0; z < 2 * (j + 1) - 1; z++) {
            printf("*");
        }
        printf("\n");
    }

}
// 5번째 => 9개 출력 4번째 7개 출력